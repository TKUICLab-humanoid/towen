# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:srv/CameraInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraInfo_Request(type):
    """Metaclass of message 'CameraInfo_Request'."""

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
                'tku_msgs.srv.CameraInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraInfo_Request(metaclass=Metaclass_CameraInfo_Request):
    """Message class 'CameraInfo_Request'."""

    __slots__ = [
        '_load',
    ]

    _fields_and_field_types = {
        'load': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.load = kwargs.get('load', bool())

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
        if self.load != other.load:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def load(self):
        """Message field 'load'."""
        return self._load

    @load.setter
    def load(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'load' field must be of type 'bool'"
        self._load = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CameraInfo_Response(type):
    """Metaclass of message 'CameraInfo_Response'."""

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
                'tku_msgs.srv.CameraInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera_info__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraInfo_Response(metaclass=Metaclass_CameraInfo_Response):
    """Message class 'CameraInfo_Response'."""

    __slots__ = [
        '_brightness',
        '_contrast',
        '_saturation',
        '_white_balance',
        '_auto_white_balance',
        '_auto_exposure',
        '_auto_backlight_compensation',
    ]

    _fields_and_field_types = {
        'brightness': 'int32',
        'contrast': 'int32',
        'saturation': 'int32',
        'white_balance': 'int32',
        'auto_white_balance': 'boolean',
        'auto_exposure': 'boolean',
        'auto_backlight_compensation': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brightness = kwargs.get('brightness', int())
        self.contrast = kwargs.get('contrast', int())
        self.saturation = kwargs.get('saturation', int())
        self.white_balance = kwargs.get('white_balance', int())
        self.auto_white_balance = kwargs.get('auto_white_balance', bool())
        self.auto_exposure = kwargs.get('auto_exposure', bool())
        self.auto_backlight_compensation = kwargs.get('auto_backlight_compensation', bool())

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
        if self.brightness != other.brightness:
            return False
        if self.contrast != other.contrast:
            return False
        if self.saturation != other.saturation:
            return False
        if self.white_balance != other.white_balance:
            return False
        if self.auto_white_balance != other.auto_white_balance:
            return False
        if self.auto_exposure != other.auto_exposure:
            return False
        if self.auto_backlight_compensation != other.auto_backlight_compensation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brightness(self):
        """Message field 'brightness'."""
        return self._brightness

    @brightness.setter
    def brightness(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brightness' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'brightness' field must be an integer in [-2147483648, 2147483647]"
        self._brightness = value

    @builtins.property
    def contrast(self):
        """Message field 'contrast'."""
        return self._contrast

    @contrast.setter
    def contrast(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'contrast' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'contrast' field must be an integer in [-2147483648, 2147483647]"
        self._contrast = value

    @builtins.property
    def saturation(self):
        """Message field 'saturation'."""
        return self._saturation

    @saturation.setter
    def saturation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'saturation' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'saturation' field must be an integer in [-2147483648, 2147483647]"
        self._saturation = value

    @builtins.property
    def white_balance(self):
        """Message field 'white_balance'."""
        return self._white_balance

    @white_balance.setter
    def white_balance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'white_balance' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'white_balance' field must be an integer in [-2147483648, 2147483647]"
        self._white_balance = value

    @builtins.property
    def auto_white_balance(self):
        """Message field 'auto_white_balance'."""
        return self._auto_white_balance

    @auto_white_balance.setter
    def auto_white_balance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_white_balance' field must be of type 'bool'"
        self._auto_white_balance = value

    @builtins.property
    def auto_exposure(self):
        """Message field 'auto_exposure'."""
        return self._auto_exposure

    @auto_exposure.setter
    def auto_exposure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_exposure' field must be of type 'bool'"
        self._auto_exposure = value

    @builtins.property
    def auto_backlight_compensation(self):
        """Message field 'auto_backlight_compensation'."""
        return self._auto_backlight_compensation

    @auto_backlight_compensation.setter
    def auto_backlight_compensation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_backlight_compensation' field must be of type 'bool'"
        self._auto_backlight_compensation = value


class Metaclass_CameraInfo(type):
    """Metaclass of service 'CameraInfo'."""

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
                'tku_msgs.srv.CameraInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__camera_info

            from tku_msgs.srv import _camera_info
            if _camera_info.Metaclass_CameraInfo_Request._TYPE_SUPPORT is None:
                _camera_info.Metaclass_CameraInfo_Request.__import_type_support__()
            if _camera_info.Metaclass_CameraInfo_Response._TYPE_SUPPORT is None:
                _camera_info.Metaclass_CameraInfo_Response.__import_type_support__()


class CameraInfo(metaclass=Metaclass_CameraInfo):
    from tku_msgs.srv._camera_info import CameraInfo_Request as Request
    from tku_msgs.srv._camera_info import CameraInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
