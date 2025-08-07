# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:srv/HSVInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HSVInfo_Request(type):
    """Metaclass of message 'HSVInfo_Request'."""

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
                'tku_msgs.srv.HSVInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hsv_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hsv_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hsv_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hsv_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hsv_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HSVInfo_Request(metaclass=Metaclass_HSVInfo_Request):
    """Message class 'HSVInfo_Request'."""

    __slots__ = [
        '_colorlabel',
    ]

    _fields_and_field_types = {
        'colorlabel': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.colorlabel = kwargs.get('colorlabel', str())

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
        if self.colorlabel != other.colorlabel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def colorlabel(self):
        """Message field 'colorlabel'."""
        return self._colorlabel

    @colorlabel.setter
    def colorlabel(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'colorlabel' field must be of type 'str'"
        self._colorlabel = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HSVInfo_Response(type):
    """Metaclass of message 'HSVInfo_Response'."""

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
                'tku_msgs.srv.HSVInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hsv_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hsv_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hsv_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hsv_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hsv_info__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HSVInfo_Response(metaclass=Metaclass_HSVInfo_Response):
    """Message class 'HSVInfo_Response'."""

    __slots__ = [
        '_hmin',
        '_hmax',
        '_smin',
        '_smax',
        '_vmin',
        '_vmax',
    ]

    _fields_and_field_types = {
        'hmin': 'int32',
        'hmax': 'int32',
        'smin': 'int32',
        'smax': 'int32',
        'vmin': 'int32',
        'vmax': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hmin = kwargs.get('hmin', int())
        self.hmax = kwargs.get('hmax', int())
        self.smin = kwargs.get('smin', int())
        self.smax = kwargs.get('smax', int())
        self.vmin = kwargs.get('vmin', int())
        self.vmax = kwargs.get('vmax', int())

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
        if self.hmin != other.hmin:
            return False
        if self.hmax != other.hmax:
            return False
        if self.smin != other.smin:
            return False
        if self.smax != other.smax:
            return False
        if self.vmin != other.vmin:
            return False
        if self.vmax != other.vmax:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hmin(self):
        """Message field 'hmin'."""
        return self._hmin

    @hmin.setter
    def hmin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmin' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hmin' field must be an integer in [-2147483648, 2147483647]"
        self._hmin = value

    @builtins.property
    def hmax(self):
        """Message field 'hmax'."""
        return self._hmax

    @hmax.setter
    def hmax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmax' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hmax' field must be an integer in [-2147483648, 2147483647]"
        self._hmax = value

    @builtins.property
    def smin(self):
        """Message field 'smin'."""
        return self._smin

    @smin.setter
    def smin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'smin' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'smin' field must be an integer in [-2147483648, 2147483647]"
        self._smin = value

    @builtins.property
    def smax(self):
        """Message field 'smax'."""
        return self._smax

    @smax.setter
    def smax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'smax' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'smax' field must be an integer in [-2147483648, 2147483647]"
        self._smax = value

    @builtins.property
    def vmin(self):
        """Message field 'vmin'."""
        return self._vmin

    @vmin.setter
    def vmin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vmin' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vmin' field must be an integer in [-2147483648, 2147483647]"
        self._vmin = value

    @builtins.property
    def vmax(self):
        """Message field 'vmax'."""
        return self._vmax

    @vmax.setter
    def vmax(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vmax' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vmax' field must be an integer in [-2147483648, 2147483647]"
        self._vmax = value


class Metaclass_HSVInfo(type):
    """Metaclass of service 'HSVInfo'."""

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
                'tku_msgs.srv.HSVInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__hsv_info

            from tku_msgs.srv import _hsv_info
            if _hsv_info.Metaclass_HSVInfo_Request._TYPE_SUPPORT is None:
                _hsv_info.Metaclass_HSVInfo_Request.__import_type_support__()
            if _hsv_info.Metaclass_HSVInfo_Response._TYPE_SUPPORT is None:
                _hsv_info.Metaclass_HSVInfo_Response.__import_type_support__()


class HSVInfo(metaclass=Metaclass_HSVInfo):
    from tku_msgs.srv._hsv_info import HSVInfo_Request as Request
    from tku_msgs.srv._hsv_info import HSVInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
