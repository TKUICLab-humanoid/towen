# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:srv/WalkingGaitParameter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WalkingGaitParameter_Request(type):
    """Metaclass of message 'WalkingGaitParameter_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tku_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tku_msgs.srv.WalkingGaitParameter_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__walking_gait_parameter__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__walking_gait_parameter__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__walking_gait_parameter__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__walking_gait_parameter__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__walking_gait_parameter__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WalkingGaitParameter_Request(metaclass=Metaclass_WalkingGaitParameter_Request):
    """Message class 'WalkingGaitParameter_Request'."""

    __slots__ = [
        '_mode',
    ]

    _fields_and_field_types = {
        'mode': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.mode != other.mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mode' field must be an integer in [-2147483648, 2147483647]"
        self._mode = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_WalkingGaitParameter_Response(type):
    """Metaclass of message 'WalkingGaitParameter_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tku_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tku_msgs.srv.WalkingGaitParameter_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__walking_gait_parameter__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__walking_gait_parameter__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__walking_gait_parameter__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__walking_gait_parameter__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__walking_gait_parameter__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WalkingGaitParameter_Response(metaclass=Metaclass_WalkingGaitParameter_Response):
    """Message class 'WalkingGaitParameter_Response'."""

    __slots__ = [
        '_x_swing_range',
        '_y_swing_range',
        '_z_swing_range',
        '_period_t',
        '_period_t2',
        '_sample_time',
        '_osc_lockrange',
        '_base_default_z',
        '_y_swing_shift',
        '_x_swing_com',
        '_base_lift_z',
        '_rightfoot_shift_z',
        '_com_y_swing',
        '_now_stand_height',
        '_now_com_height',
        '_stand_balance',
        '_hip_roll',
        '_ankle_roll',
    ]

    _fields_and_field_types = {
        'x_swing_range': 'float',
        'y_swing_range': 'float',
        'z_swing_range': 'float',
        'period_t': 'int32',
        'period_t2': 'int32',
        'sample_time': 'int32',
        'osc_lockrange': 'float',
        'base_default_z': 'float',
        'y_swing_shift': 'float',
        'x_swing_com': 'float',
        'base_lift_z': 'float',
        'rightfoot_shift_z': 'float',
        'com_y_swing': 'float',
        'now_stand_height': 'float',
        'now_com_height': 'float',
        'stand_balance': 'boolean',
        'hip_roll': 'float',
        'ankle_roll': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_swing_range = kwargs.get('x_swing_range', float())
        self.y_swing_range = kwargs.get('y_swing_range', float())
        self.z_swing_range = kwargs.get('z_swing_range', float())
        self.period_t = kwargs.get('period_t', int())
        self.period_t2 = kwargs.get('period_t2', int())
        self.sample_time = kwargs.get('sample_time', int())
        self.osc_lockrange = kwargs.get('osc_lockrange', float())
        self.base_default_z = kwargs.get('base_default_z', float())
        self.y_swing_shift = kwargs.get('y_swing_shift', float())
        self.x_swing_com = kwargs.get('x_swing_com', float())
        self.base_lift_z = kwargs.get('base_lift_z', float())
        self.rightfoot_shift_z = kwargs.get('rightfoot_shift_z', float())
        self.com_y_swing = kwargs.get('com_y_swing', float())
        self.now_stand_height = kwargs.get('now_stand_height', float())
        self.now_com_height = kwargs.get('now_com_height', float())
        self.stand_balance = kwargs.get('stand_balance', bool())
        self.hip_roll = kwargs.get('hip_roll', float())
        self.ankle_roll = kwargs.get('ankle_roll', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x_swing_range != other.x_swing_range:
            return False
        if self.y_swing_range != other.y_swing_range:
            return False
        if self.z_swing_range != other.z_swing_range:
            return False
        if self.period_t != other.period_t:
            return False
        if self.period_t2 != other.period_t2:
            return False
        if self.sample_time != other.sample_time:
            return False
        if self.osc_lockrange != other.osc_lockrange:
            return False
        if self.base_default_z != other.base_default_z:
            return False
        if self.y_swing_shift != other.y_swing_shift:
            return False
        if self.x_swing_com != other.x_swing_com:
            return False
        if self.base_lift_z != other.base_lift_z:
            return False
        if self.rightfoot_shift_z != other.rightfoot_shift_z:
            return False
        if self.com_y_swing != other.com_y_swing:
            return False
        if self.now_stand_height != other.now_stand_height:
            return False
        if self.now_com_height != other.now_com_height:
            return False
        if self.stand_balance != other.stand_balance:
            return False
        if self.hip_roll != other.hip_roll:
            return False
        if self.ankle_roll != other.ankle_roll:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_swing_range(self):
        """Message field 'x_swing_range'."""
        return self._x_swing_range

    @x_swing_range.setter
    def x_swing_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_swing_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_swing_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_swing_range = value

    @builtins.property
    def y_swing_range(self):
        """Message field 'y_swing_range'."""
        return self._y_swing_range

    @y_swing_range.setter
    def y_swing_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_swing_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_swing_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_swing_range = value

    @builtins.property
    def z_swing_range(self):
        """Message field 'z_swing_range'."""
        return self._z_swing_range

    @z_swing_range.setter
    def z_swing_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_swing_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_swing_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_swing_range = value

    @builtins.property
    def period_t(self):
        """Message field 'period_t'."""
        return self._period_t

    @period_t.setter
    def period_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'period_t' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'period_t' field must be an integer in [-2147483648, 2147483647]"
        self._period_t = value

    @builtins.property
    def period_t2(self):
        """Message field 'period_t2'."""
        return self._period_t2

    @period_t2.setter
    def period_t2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'period_t2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'period_t2' field must be an integer in [-2147483648, 2147483647]"
        self._period_t2 = value

    @builtins.property
    def sample_time(self):
        """Message field 'sample_time'."""
        return self._sample_time

    @sample_time.setter
    def sample_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sample_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sample_time' field must be an integer in [-2147483648, 2147483647]"
        self._sample_time = value

    @builtins.property
    def osc_lockrange(self):
        """Message field 'osc_lockrange'."""
        return self._osc_lockrange

    @osc_lockrange.setter
    def osc_lockrange(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'osc_lockrange' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'osc_lockrange' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._osc_lockrange = value

    @builtins.property
    def base_default_z(self):
        """Message field 'base_default_z'."""
        return self._base_default_z

    @base_default_z.setter
    def base_default_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_default_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'base_default_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._base_default_z = value

    @builtins.property
    def y_swing_shift(self):
        """Message field 'y_swing_shift'."""
        return self._y_swing_shift

    @y_swing_shift.setter
    def y_swing_shift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_swing_shift' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_swing_shift' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_swing_shift = value

    @builtins.property
    def x_swing_com(self):
        """Message field 'x_swing_com'."""
        return self._x_swing_com

    @x_swing_com.setter
    def x_swing_com(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_swing_com' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_swing_com' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_swing_com = value

    @builtins.property
    def base_lift_z(self):
        """Message field 'base_lift_z'."""
        return self._base_lift_z

    @base_lift_z.setter
    def base_lift_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_lift_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'base_lift_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._base_lift_z = value

    @builtins.property
    def rightfoot_shift_z(self):
        """Message field 'rightfoot_shift_z'."""
        return self._rightfoot_shift_z

    @rightfoot_shift_z.setter
    def rightfoot_shift_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rightfoot_shift_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rightfoot_shift_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rightfoot_shift_z = value

    @builtins.property
    def com_y_swing(self):
        """Message field 'com_y_swing'."""
        return self._com_y_swing

    @com_y_swing.setter
    def com_y_swing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'com_y_swing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'com_y_swing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._com_y_swing = value

    @builtins.property
    def now_stand_height(self):
        """Message field 'now_stand_height'."""
        return self._now_stand_height

    @now_stand_height.setter
    def now_stand_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'now_stand_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'now_stand_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._now_stand_height = value

    @builtins.property
    def now_com_height(self):
        """Message field 'now_com_height'."""
        return self._now_com_height

    @now_com_height.setter
    def now_com_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'now_com_height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'now_com_height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._now_com_height = value

    @builtins.property
    def stand_balance(self):
        """Message field 'stand_balance'."""
        return self._stand_balance

    @stand_balance.setter
    def stand_balance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stand_balance' field must be of type 'bool'"
        self._stand_balance = value

    @builtins.property
    def hip_roll(self):
        """Message field 'hip_roll'."""
        return self._hip_roll

    @hip_roll.setter
    def hip_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hip_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hip_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hip_roll = value

    @builtins.property
    def ankle_roll(self):
        """Message field 'ankle_roll'."""
        return self._ankle_roll

    @ankle_roll.setter
    def ankle_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ankle_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ankle_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ankle_roll = value


class Metaclass_WalkingGaitParameter(type):
    """Metaclass of service 'WalkingGaitParameter'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tku_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tku_msgs.srv.WalkingGaitParameter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__walking_gait_parameter

            from tku_msgs.srv import _walking_gait_parameter
            if _walking_gait_parameter.Metaclass_WalkingGaitParameter_Request._TYPE_SUPPORT is None:
                _walking_gait_parameter.Metaclass_WalkingGaitParameter_Request.__import_type_support__()
            if _walking_gait_parameter.Metaclass_WalkingGaitParameter_Response._TYPE_SUPPORT is None:
                _walking_gait_parameter.Metaclass_WalkingGaitParameter_Response.__import_type_support__()


class WalkingGaitParameter(metaclass=Metaclass_WalkingGaitParameter):
    from tku_msgs.srv._walking_gait_parameter import WalkingGaitParameter_Request as Request
    from tku_msgs.srv._walking_gait_parameter import WalkingGaitParameter_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
