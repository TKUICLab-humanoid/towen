#!/usr/bin/env python3
# coding=utf-8
import json
from typing import Dict, List, Tuple, Optional

import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.duration import Duration
<<<<<<< HEAD
from rclpy.executors import MultiThreadedExecutor
=======
>>>>>>> update
from rclpy.qos import QoSProfile, HistoryPolicy, ReliabilityPolicy, DurabilityPolicy

from std_msgs.msg import String, UInt8MultiArray, Int16
from geometry_msgs.msg import Point
<<<<<<< HEAD
=======
from sensor_msgs.msg import Image as RosImage
from cv_bridge import CvBridge
>>>>>>> update

from tku_msgs.msg import (
    Interface,
    SensorPackage,
    SensorSet,
    Dio,
    DrawImage,
    HeadPackage,
    SingleMotorData,
)

class API(Node):
    # 顏色索引常量
    ORANGE, YELLOW, BLUE, GREEN, BLACK, RED, WHITE, OTHERS = range(8)
    COLORS = ['orange', 'yellow', 'blue', 'green', 'black', 'red', 'white', 'others']

    def __init__(self, node_name: str = 'API'):
        super().__init__(node_name)

<<<<<<< HEAD
=======
        # 影像 stamp 與到達間隔的 EMA（毫秒）
        self.label_matrix_stamp = (0, 0)
        self._lm_prev_ns = None
        self.lm_dt_ms_ema = None   # 影像到達間隔的指數移動平均 (ms)
        self.lm_fps_ema = None     # 影像 FPS 的 EMA



>>>>>>> update
        # --- Callback groups：IMU 與影像分流，避免互相阻塞 ---
        self.imu_cbg = ReentrantCallbackGroup()
        self.image_cbg = ReentrantCallbackGroup()

        # ===================== QoS =====================
<<<<<<< HEAD
        # 只保留最新一筆；如需晚加入者馬上拿到上一筆，將 durability 改成 TRANSIENT_LOCAL（發佈端與訂閱端都要一致）
=======
>>>>>>> update
        self.qos_latest = QoSProfile(
            history=HistoryPolicy.KEEP_LAST, depth=1,
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.VOLATILE
        )

        # ===================== 發佈器（控制/回命令） =====================
        self.imu_reset_pub = self.create_publisher(SensorSet, '/sensorset', 10)
        self.singlemotor_pub = self.create_publisher(SingleMotorData, '/package/SingleMotorData', 10)
        self.generate_pub = self.create_publisher(Int16, '/ContinousMode_Topic', 10)
        self.continous_pub = self.create_publisher(Interface, '/ChangeContinuousValue_Topic', 10)
        self.head_motor_pub = self.create_publisher(HeadPackage, '/package/HeadMotor', 10)
        self.sector_pub = self.create_publisher(Int16, '/package/Sector', 10)
        self.draw_image_pub = self.create_publisher(DrawImage, '/drawimage', 10)

        # ===================== 訂閱器（IMU/FPGA/YOLO） =====================
        self.dio_sub = self.create_subscription(
            Dio, '/package/FPGAack', self.dio_callback, 1, callback_group=self.imu_cbg
        )
        self.imu_sub = self.create_subscription(
            SensorPackage, '/package/sensorpackage', self.imu, 10, callback_group=self.imu_cbg
        )
        self.yolo_zed = self.create_subscription(
            Point, '/zed_yolo_ball', self.Yolo_Zed, 10, callback_group=self.imu_cbg
        )
<<<<<<< HEAD
        self.ContinuousValue_sub = self.create_subscription(Interface, '/ChangeContinuousValue_Topic', self.ContinuousValueFunction, 1000)
        # ===================== 訂閱器（影像偵測） =====================
        # 1) 總體 label_matrix（全域二值化）
        self.label_matrix: Optional[np.ndarray] = None
        self.label_matrix_flatten: Optional[np.ndarray] = None
        self.mask_sub = self.create_subscription(
            UInt8MultiArray, 'label_matrix', self.mask_matrix_callback, 10, callback_group=self.image_cbg
        )

        # 2)（可選）每個顏色的 mask（若偵測端有發布 <color>_mask 才會收到；否則維持 None）
=======
        self.ContinuousValue_sub = self.create_subscription(
            Interface, '/ChangeContinuousValue_Topic', self.ContinuousValueFunction, 1000
        )

        # ===================== 訂閱器（影像偵測） =====================
        # 總體 label_matrix（mono8 Image）
        self.label_matrix: Optional[np.ndarray] = None
        self.label_matrix_flatten: Optional[np.ndarray] = None
        self._bridge = CvBridge()
        self.label_img_sub = self.create_subscription(
            RosImage, 'label_matrix', self._label_image_cb, 10, callback_group=self.image_cbg
        )

        # 每個顏色的 mask（若偵測端有發布 <color>_mask 才會收到；型別仍為 UInt8MultiArray）
>>>>>>> update
        self.latest_masks: Dict[str, Optional[np.ndarray]] = {c: None for c in self.COLORS}
        for c in self.COLORS:
            topic = f'{c}_mask'
            self.create_subscription(
                UInt8MultiArray,
                topic,
                lambda msg, label=c: self._mask_callback(msg, label),
                10,
                callback_group=self.image_cbg,
            )
            self.get_logger().info(f'[mask] Subscribed to {topic}')

<<<<<<< HEAD
        # 3) 每色偵測結果（高頻、精簡）：/detections/<label>
=======
        # 每色偵測結果（高頻、精簡）：/detections/<label>
>>>>>>> update
        self.latest_objects: Dict[str, List[dict]] = {c: [] for c in self.COLORS}
        self.latest_stamps: Dict[str, Tuple[int, int]] = {c: (0, 0) for c in self.COLORS}
        for c in self.COLORS:
            topic = f'detections/{c}'
            self.create_subscription(
                String, topic, lambda msg, label=c: self._det_callback(msg, label),
                self.qos_latest, callback_group=self.image_cbg
            )
            self.get_logger().info(f'[det] Subscribed to {topic}')

<<<<<<< HEAD
        # （若仍保留舊的「整包 object_info」可解開下列註解）
        # self.object_info_sub = self.create_subscription(
        #     String, 'object_info', self.object_info_callback, 10, callback_group=self.image_cbg
        # )

        # ===================== 狀態 / 統計 =====================
        self.is_start: bool = False
        self.dio: Optional[int] = None
        self.roll = self.pitch = self.yaw = 0.0
        self.imu_rpy = [0.0, 0.0, 0.0]

        self.pose_x = self.pose_y = self.pose_z = 0.0
        self.pose = [0.0, 0.0, 0.0]

        self.xx,self.yy,self.tt = 0,0,0
=======
        # ===================== 狀態 / 統計 =====================
        self.is_start: bool = False
        self.dio: Optional[int] = 0x00
        self.roll = self.pitch = self.yaw = 0.0
        self.imu_rpy = [self.roll, self.pitch, self.yaw]

        self.pose_x = self.pose_y = self.pose_z = 0.0
        self.pose = [self.pose_x, self.pose_y, self.pose_z]

        self.xx, self.yy, self.tt = 0, 0, 0
>>>>>>> update

        self.color_counts: List[int] = [0] * len(self.COLORS)
        self.object_sizes: List[List[float]] = [[] for _ in self.COLORS]
        self.object_x_min: List[List[int]] = [[] for _ in self.COLORS]
        self.object_x_max: List[List[int]] = [[] for _ in self.COLORS]
        self.object_y_min: List[List[int]] = [[] for _ in self.COLORS]
        self.object_y_max: List[List[int]] = [[] for _ in self.COLORS]

        self.new_object_info: bool = False  # 有新偵測資料進來就設 True

    # ===================== 共用工具 =====================
    @staticmethod
    def _is_newer_stamp(a: Tuple[int, int], b: Tuple[int, int]) -> bool:
<<<<<<< HEAD
        """a 是否新於 b；a/b 皆為 (sec, nsec)"""
        return (a[0] > b[0]) or (a[0] == b[0] and a[1] > b[1])

    def _recompute_stats(self) -> None:
        """依據 self.latest_objects 重算 color_counts 與 bbox/area 統計"""
=======
        return (a[0] > b[0]) or (a[0] == b[0] and a[1] > b[1])

    def _recompute_stats(self) -> None:
>>>>>>> update
        n = len(self.COLORS)
        self.color_counts = [0] * n
        self.object_sizes = [[] for _ in self.COLORS]
        self.object_x_min = [[] for _ in self.COLORS]
        self.object_x_max = [[] for _ in self.COLORS]
        self.object_y_min = [[] for _ in self.COLORS]
        self.object_y_max = [[] for _ in self.COLORS]

        for idx, color in enumerate(self.COLORS):
            lst = self.latest_objects.get(color, [])
            self.color_counts[idx] = len(lst)
            for o in lst:
                try:
                    x, y, w, h = o['bbox']
                    area = float(o.get('area', float(w * h)))
                except Exception as ex:
                    self.get_logger().warn(f"[stats] Malformed object for color {color}: {ex}")
                    continue
                self.object_sizes[idx].append(area)
                self.object_x_min[idx].append(int(x))
                self.object_x_max[idx].append(int(x + w))
                self.object_y_min[idx].append(int(y))
                self.object_y_max[idx].append(int(y + h))

    # ===================== 偵測（per-color）callback =====================
    def _det_callback(self, msg: String, label: str) -> None:
<<<<<<< HEAD
        """訂閱每色 detections/<label>，更新最新快照與統計"""
=======
>>>>>>> update
        try:
            data = json.loads(msg.data)
            st = data.get('stamp', {})
            cur = (int(st.get('sec', 0)), int(st.get('nanosec', 0)))
            prev = self.latest_stamps.get(label, (0, 0))
            if not self._is_newer_stamp(cur, prev):
<<<<<<< HEAD
                # 舊資料忽略
=======
>>>>>>> update
                return

            objs = data.get('objects', [])
            if not isinstance(objs, list):
                objs = []

<<<<<<< HEAD
            # 更新快照與 stamp
            self.latest_objects[label] = objs
            self.latest_stamps[label] = cur

            # 重算統計
            self._recompute_stats()

            # 標記新資料
=======
            self.latest_objects[label] = objs
            self.latest_stamps[label] = cur

            self._recompute_stats()
>>>>>>> update
            self.new_object_info = True

        except Exception as e:
            self.get_logger().error(f'[det] detections/{label} parse error: {e}')

    # ===================== （可選）整包 object_info callback =====================
    def object_info_callback(self, msg: String) -> None:
<<<<<<< HEAD
        """若你同時保留整包 object_info，可使用此 callback；不再主推。"""
        if self.new_object_info == False:
=======
        if self.new_object_info is False:
>>>>>>> update
            try:
                data = json.loads(msg.data)
                if isinstance(data, str):
                    data = json.loads(data)
            except Exception as e:
                self.get_logger().error(f"[object_info] JSON parse error: {e}")
                return

<<<<<<< HEAD
            # 將整包拆回 per-color 最新快照
=======
>>>>>>> update
            stamp = data.get('_stamp', {'sec': 0, 'nanosec': 0})
            cur_all = (int(stamp.get('sec', 0)), int(stamp.get('nanosec', 0)))

            for color in self.COLORS:
                lst = data.get(color, [])
                if not isinstance(lst, list):
                    continue
                prev = self.latest_stamps.get(color, (0, 0))
                if self._is_newer_stamp(cur_all, prev):
                    self.latest_objects[color] = lst
                    self.latest_stamps[color] = cur_all

            self._recompute_stats()
            self.new_object_info = True

    # ===================== mask / label_matrix callbacks =====================
    def _mask_callback(self, msg: UInt8MultiArray, label: str) -> None:
        dims = msg.layout.dim
        if len(dims) < 2:
            self.get_logger().error("[mask] layout 格式錯誤")
            return
        rows = dims[0].size
        cols = dims[1].size
<<<<<<< HEAD
        try:
            arr = np.array(msg.data, dtype=np.uint8).reshape((rows, cols))
            self.latest_masks[label] = arr
        except Exception as e:
            self.get_logger().error(f"[mask] 還原 {label} mask 失敗：{e}")

    def mask_matrix_callback(self, msg: UInt8MultiArray) -> None:
        dims = msg.layout.dim
        if len(dims) < 2:
            self.get_logger().error("[label_matrix] layout 格式錯誤")
            return
        rows, cols = dims[0].size, dims[1].size
=======
>>>>>>> update
        try:
            arr = np.array(msg.data, dtype=np.uint8).reshape((rows, cols))
            self.latest_masks[label] = arr
        except Exception as e:
            self.get_logger().error(f"[mask] 還原 {label} mask 失敗：{e}")

    def _label_image_cb(self, msg: RosImage) -> None:
        try:
            arr = self._bridge.imgmsg_to_cv2(msg, desired_encoding='mono8')
            self.label_matrix = arr
            self.label_matrix_flatten = arr.flatten()

            # ←← 新增：記下時間戳並估算週期/頻率
            self.label_matrix_stamp = (int(msg.header.stamp.sec), int(msg.header.stamp.nanosec))
            cur_ns = self.label_matrix_stamp[0] * 1_000_000_000 + self.label_matrix_stamp[1]
            if self._lm_prev_ns is not None and cur_ns > self._lm_prev_ns:
                dt_ms = (cur_ns - self._lm_prev_ns) / 1e6
                alpha = 0.2  # 平滑係數，可調 0.1~0.3
                self.lm_dt_ms_ema = dt_ms if self.lm_dt_ms_ema is None else (1 - alpha) * self.lm_dt_ms_ema + alpha * dt_ms
                if self.lm_dt_ms_ema and self.lm_dt_ms_ema > 1e-6:
                    self.lm_fps_ema = 1000.0 / self.lm_dt_ms_ema
            self._lm_prev_ns = cur_ns

        except Exception as e:
<<<<<<< HEAD
            self.get_logger().error(f"[label_matrix] 無法還原：{e}")

=======
            self.get_logger().error(f"[label_matrix(Image)] 轉換失敗：{e}")


>>>>>>> update
    # ===================== IMU / YOLO callback =====================
    def dio_callback(self, msg: Dio) -> None:
        self.is_start = bool(msg.strategy)
        self.dio = msg.data

    def imu(self, msg: SensorPackage) -> None:
        self.roll = msg.roll
        self.pitch = msg.pitch
        self.yaw = msg.yaw
        self.imu_rpy = [self.roll, self.pitch, self.yaw]

    def Yolo_Zed(self, msg: Point) -> None:
        self.pose_x = msg.x
        self.pose_y = msg.y
        self.pose_z = msg.z
        self.pose = [self.pose_x, self.pose_y, self.pose_z]

    # ===================== 控制指令封裝 =====================
    def sendSensorReset(self, status: bool) -> None:
        rst = SensorSet()
        rst.reset = status
        self.imu_reset_pub.publish(rst)

    def sendbodyAuto(self, generate: int) -> None:
        m = Int16()
        m.data = generate
        self.generate_pub.publish(m)

    def sendContinuousValue(self, x: float, y: float, theta: float) -> None:
        m = Interface()
        m.x, m.y, m.theta = x, y, theta
        self.continous_pub.publish(m)

    def sendBodySector(self, sector: int) -> None:
        m = Int16()
        m.data = sector
        self.sector_pub.publish(m)

    def sendSingleMotor(self, ID: int, Position: int, Speed: int) -> None:
        m = SingleMotorData()
        m.id, m.position, m.speed = ID, Position, Speed
        self.singlemotor_pub.publish(m)

    def sendHeadMotor(self, ID: int, Position: int, Speed: int) -> None:
        m = HeadPackage()
        m.id, m.position, m.speed = ID, Position, Speed
        self.head_motor_pub.publish(m)

    def drawImageFunction(self, cnt: int, mode: int,
                          xmin: int, xmax: int, ymin: int, ymax: int,
                          r: int, g: int, b: int) -> None:
        img = DrawImage()
        img.cnt = cnt
        img.mode = mode
        img.xmin, img.xmax = xmin, xmax
        img.ymin, img.ymax = ymin, ymax
        img.rvalue, img.gvalue, img.bvalue = r, g, b
        self.draw_image_pub.publish(img)

    def time_sleep(self, second: float) -> None:
<<<<<<< HEAD
        # 注意：在 callback 內睡會阻塞；建議用 Timer 或 state-machine 節奏控管
=======
>>>>>>> update
        self.get_clock().sleep_for(Duration(seconds=second))

    # ===================== 查詢介面（便於決策層使用） =====================
    def get_objects(self, color: Optional[str] = None) -> List[dict]:
<<<<<<< HEAD
        """
        color=None → 回傳合併後的所有物件（list）
        color 指定 → 回傳該色的最新物件 list
        """
=======
>>>>>>> update
        if color is None:
            all_objs: List[dict] = []
            for c in self.COLORS:
                all_objs.extend(self.latest_objects.get(c, []))
            return all_objs
        return self.latest_objects.get(color, [])
<<<<<<< HEAD
    

    def ContinuousValueFunction(self, msg):
        self.xx = msg.x
        self.yy = msg.y
        self.tt = msg.theta

# def main():
#     rclpy.init()
#     node = API()

#     # 使用多執行緒 executor，允許同時處理 IMU/影像回呼
#     executor = MultiThreadedExecutor(num_threads=2)
#     executor.add_node(node)

#     try:
#         executor.spin()
#     except KeyboardInterrupt:
#         pass
#     finally:
#         executor.shutdown()
#         node.destroy_node()
#         rclpy.shutdown()

# if __name__ == '__main__':
#     main()
=======

    def ContinuousValueFunction(self, msg: Interface) -> None:
        self.xx = msg.x
        self.yy = msg.y
        self.tt = msg.theta
>>>>>>> update
