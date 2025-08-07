# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:msg/Camera.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Camera(type):
    """Metaclass of message 'Camera'."""

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
                'tku_msgs.msg.Camera')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__camera
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__camera
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__camera
            cls._TYPE_SUPPORT = module.type_support_msg__msg__camera
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__camera

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Camera(metaclass=Metaclass_Camera):
    """Message class 'Camera'."""

    __slots__ = [
        '_brightness',
        '_contrast',
        '_saturation',
        '_whitebalance',
        '_autowhitebalance',
        '_auto_exposure',
    ]

    _fields_and_field_types = {
        'brightness': 'float',
        'contrast': 'float',
        'saturation': 'float',
        'whitebalance': 'float',
        'autowhitebalance': 'boolean',
        'auto_exposure': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brightness = kwargs.get('brightness', float())
        self.contrast = kwargs.get('contrast', float())
        self.saturation = kwargs.get('saturation', float())
        self.whitebalance = kwargs.get('whitebalance', float())
        self.autowhitebalance = kwargs.get('autowhitebalance', bool())
        self.auto_exposure = kwargs.get('auto_exposure', bool())

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
        if self.whitebalance != other.whitebalance:
            return False
        if self.autowhitebalance != other.autowhitebalance:
            return False
        if self.auto_exposure != other.auto_exposure:
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
                isinstance(value, float), \
                "The 'brightness' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brightness' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brightness = value

    @builtins.property
    def contrast(self):
        """Message field 'contrast'."""
        return self._contrast

    @contrast.setter
    def contrast(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'contrast' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'contrast' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._contrast = value

    @builtins.property
    def saturation(self):
        """Message field 'saturation'."""
        return self._saturation

    @saturation.setter
    def saturation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'saturation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'saturation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._saturation = value

    @builtins.property
    def whitebalance(self):
        """Message field 'whitebalance'."""
        return self._whitebalance

    @whitebalance.setter
    def whitebalance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'whitebalance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'whitebalance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._whitebalance = value

    @builtins.property
    def autowhitebalance(self):
        """Message field 'autowhitebalance'."""
        return self._autowhitebalance

    @autowhitebalance.setter
    def autowhitebalance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'autowhitebalance' field must be of type 'bool'"
        self._autowhitebalance = value

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
