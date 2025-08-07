# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:msg/PIDpackage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PIDpackage(type):
    """Metaclass of message 'PIDpackage'."""

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
                'tku_msgs.msg.PIDpackage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pi_dpackage
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pi_dpackage
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pi_dpackage
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pi_dpackage
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pi_dpackage

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PIDpackage(metaclass=Metaclass_PIDpackage):
    """Message class 'PIDpackage'."""

    __slots__ = [
        '_motor_p',
        '_motor_i',
        '_motor_d',
        '_pflag',
        '_iflag',
        '_dflag',
        '_motorid',
    ]

    _fields_and_field_types = {
        'motor_p': 'int16',
        'motor_i': 'int16',
        'motor_d': 'int16',
        'pflag': 'boolean',
        'iflag': 'boolean',
        'dflag': 'boolean',
        'motorid': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_p = kwargs.get('motor_p', int())
        self.motor_i = kwargs.get('motor_i', int())
        self.motor_d = kwargs.get('motor_d', int())
        self.pflag = kwargs.get('pflag', bool())
        self.iflag = kwargs.get('iflag', bool())
        self.dflag = kwargs.get('dflag', bool())
        self.motorid = kwargs.get('motorid', int())

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
        if self.motor_p != other.motor_p:
            return False
        if self.motor_i != other.motor_i:
            return False
        if self.motor_d != other.motor_d:
            return False
        if self.pflag != other.pflag:
            return False
        if self.iflag != other.iflag:
            return False
        if self.dflag != other.dflag:
            return False
        if self.motorid != other.motorid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_p(self):
        """Message field 'motor_p'."""
        return self._motor_p

    @motor_p.setter
    def motor_p(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_p' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'motor_p' field must be an integer in [-32768, 32767]"
        self._motor_p = value

    @builtins.property
    def motor_i(self):
        """Message field 'motor_i'."""
        return self._motor_i

    @motor_i.setter
    def motor_i(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_i' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'motor_i' field must be an integer in [-32768, 32767]"
        self._motor_i = value

    @builtins.property
    def motor_d(self):
        """Message field 'motor_d'."""
        return self._motor_d

    @motor_d.setter
    def motor_d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_d' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'motor_d' field must be an integer in [-32768, 32767]"
        self._motor_d = value

    @builtins.property
    def pflag(self):
        """Message field 'pflag'."""
        return self._pflag

    @pflag.setter
    def pflag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pflag' field must be of type 'bool'"
        self._pflag = value

    @builtins.property
    def iflag(self):
        """Message field 'iflag'."""
        return self._iflag

    @iflag.setter
    def iflag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'iflag' field must be of type 'bool'"
        self._iflag = value

    @builtins.property
    def dflag(self):
        """Message field 'dflag'."""
        return self._dflag

    @dflag.setter
    def dflag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dflag' field must be of type 'bool'"
        self._dflag = value

    @builtins.property
    def motorid(self):
        """Message field 'motorid'."""
        return self._motorid

    @motorid.setter
    def motorid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motorid' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'motorid' field must be an integer in [-32768, 32767]"
        self._motorid = value
