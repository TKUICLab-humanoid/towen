#ifndef TDATAUNIT_H
#define TDATAUNIT_H

#include <memory>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>
#include <iostream>
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <sys/time.h>
#include "camera_info_manager/camera_info_manager.hpp"
#include "image_transport/image_transport.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "std_srvs/srv/set_bool.hpp"
#include "tku_msgs/msg/camera.hpp"
#include "usb_cam/usb_cam.hpp"
#include "tku_msgs/msg/location.hpp"
#include "tku_msgs/msg/camera_save.hpp"
#include "tku_msgs/srv/camera_info.hpp"

struct CameraParameter {
    std::string ParameterName;
    int auto_exposure;
    int auto_white_balance;
    int auto_Backlight_Compensation;
    int brightness;
    int contrast;
    int saturation;
    int white_balance;
};

class Tool {
public:
    Tool();
    ~Tool();
    std::string getPackagePath(const std::string& package_name);
    float readvalue(std::fstream& fin, const std::string& title, int mode);

private:
    std::string packagePath;

public:
    std::string parameterPath;
};

class ToolInstance : public Tool {
public:
    ToolInstance() : Tool() {}
    ~ToolInstance() {}
    static ToolInstance* getInstance();
    static void deleteInstance();

private:
    static ToolInstance* m_pInstance;
};

class TdataUnit {
public:
    TdataUnit();
    ~TdataUnit();
    void SaveCameraSetFile(const std::string& location);
    void LoadCameraSetFile(const std::string& location);

    CameraParameter* CameraParameterValue;
    ToolInstance* tool;
private:
    std::string location;
    std::string file_path_;
    int brightness_;
    int contrast_;
    int saturation_;
    int white_balance_;
    int auto_exposure_;
    int auto_white_balance_;
    int auto_Backlight_Compensation_;
    int previous_brightness;
    int previous_contrast;
    int previous_saturation;
    int previous_white_balance;
    int previous_auto_exposure;
    int previous_auto_white_balance;
    int previous_auto_Backlight_Compensation_;
    std::string previous_file_path;
};

namespace usb_cam {

class UsbCamNode : public rclcpp::Node {
public:
    bool prev_auto_wb_{false};      // 用来检测 AWB 的开->关 边沿
    int  cached_wb_temp_{4000};     // 缓存“自动”模式下读到的色温
    explicit UsbCamNode(const rclcpp::NodeOptions& node_options);
    ~UsbCamNode();
    
    void loadcamerasetfile();
    void savecamerasetfile();
    void init();
    void get_params();
    void assign_params(const std::vector<rclcpp::Parameter>& parameters);
    void set_v4l2_params();
    void update();
    void camera_param_callback(const tku_msgs::msg::Camera& msg);

    void location_callback(const tku_msgs::msg::Location& msg);

    void camera_save_callback(const tku_msgs::msg::CameraSave& msg);

    bool callcamerainfofunction(
        const std::shared_ptr<tku_msgs::srv::CameraInfo::Request> request,
        std::shared_ptr<tku_msgs::srv::CameraInfo::Response> response);

    bool take_and_send_image();

    rcl_interfaces::msg::SetParametersResult parameters_callback(
        const std::vector<rclcpp::Parameter>& parameters);

    void service_capture(
        const std::shared_ptr<rmw_request_id_t> request_header,
        const std::shared_ptr<std_srvs::srv::SetBool::Request> request,
        std::shared_ptr<std_srvs::srv::SetBool::Response> response);

    void getFilePath();

private:
    int brightness_;
    int contrast_;
    int saturation_;
    int white_balance_;
    int exposure_;
    bool auto_focus_;
    bool auto_white_balance_;
    bool auto_exposure_;
    CameraParameter* CameraParameterValue;
    UsbCam* m_camera;
    sensor_msgs::msg::Image::SharedPtr m_image_msg;
    image_transport::CameraPublisher m_image_publisher;
    parameters_t m_parameters;
    sensor_msgs::msg::CameraInfo::SharedPtr m_camera_info_msg;
    std::shared_ptr<camera_info_manager::CameraInfoManager> m_camera_info;
    rclcpp::TimerBase::SharedPtr m_timer;
    rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr m_service_capture;
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr m_parameters_callback_handle;

    rclcpp::Subscription<tku_msgs::msg::Camera>::SharedPtr sub_camera_param_;
    rclcpp::Service<tku_msgs::srv::CameraInfo>::SharedPtr srv_camera_info_;
    rclcpp::Subscription<tku_msgs::msg::Location>::SharedPtr sub_location_;
    rclcpp::Subscription<tku_msgs::msg::CameraSave>::SharedPtr sub_camera_save_;

    TdataUnit CameraSet;
    std::string location;
    std::string file_path_;
};

}  // namespace usb_cam

#endif  // TDATAUNIT_H
