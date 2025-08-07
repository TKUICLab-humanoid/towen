# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:srv/ReadMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReadMotion_Request(type):
    """Metaclass of message 'ReadMotion_Request'."""

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
                'tku_msgs.srv.ReadMotion_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__read_motion__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__read_motion__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__read_motion__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__read_motion__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__read_motion__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReadMotion_Request(metaclass=Metaclass_ReadMotion_Request):
    """Message class 'ReadMotion_Request'."""

    __slots__ = [
        '_read',
        '_name',
        '_readstate',
    ]

    _fields_and_field_types = {
        'read': 'boolean',
        'name': 'string',
        'readstate': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.read = kwargs.get('read', bool())
        self.name = kwargs.get('name', str())
        self.readstate = kwargs.get('readstate', int())

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
        if self.read != other.read:
            return False
        if self.name != other.name:
            return False
        if self.readstate != other.readstate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def read(self):
        """Message field 'read'."""
        return self._read

    @read.setter
    def read(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'read' field must be of type 'bool'"
        self._read = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def readstate(self):
        """Message field 'readstate'."""
        return self._readstate

    @readstate.setter
    def readstate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'readstate' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'readstate' field must be an integer in [-2147483648, 2147483647]"
        self._readstate = value


# Import statements for member types

# Member 'motionstate'
# Member 'id'
# Member 'motionlist'
# Member 'relativedata'
# Member 'absolutedata'
import array  # noqa: E402, I100

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ReadMotion_Response(type):
    """Metaclass of message 'ReadMotion_Response'."""

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
                'tku_msgs.srv.ReadMotion_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__read_motion__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__read_motion__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__read_motion__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__read_motion__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__read_motion__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReadMotion_Response(metaclass=Metaclass_ReadMotion_Response):
    """Message class 'ReadMotion_Response'."""

    __slots__ = [
        '_readcheck',
        '_vectorcnt',
        '_motionstate',
        '_id',
        '_motionlist',
        '_relativedata',
        '_absolutedata',
    ]

    _fields_and_field_types = {
        'readcheck': 'boolean',
        'vectorcnt': 'int32',
        'motionstate': 'sequence<int32>',
        'id': 'sequence<int32>',
        'motionlist': 'sequence<int32>',
        'relativedata': 'sequence<int32>',
        'absolutedata': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.readcheck = kwargs.get('readcheck', bool())
        self.vectorcnt = kwargs.get('vectorcnt', int())
        self.motionstate = array.array('i', kwargs.get('motionstate', []))
        self.id = array.array('i', kwargs.get('id', []))
        self.motionlist = array.array('i', kwargs.get('motionlist', []))
        self.relativedata = array.array('i', kwargs.get('relativedata', []))
        self.absolutedata = array.array('i', kwargs.get('absolutedata', []))

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
        if self.readcheck != other.readcheck:
            return False
        if self.vectorcnt != other.vectorcnt:
            return False
        if self.motionstate != other.motionstate:
            return False
        if self.id != other.id:
            return False
        if self.motionlist != other.motionlist:
            return False
        if self.relativedata != other.relativedata:
            return False
        if self.absolutedata != other.absolutedata:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def readcheck(self):
        """Message field 'readcheck'."""
        return self._readcheck

    @readcheck.setter
    def readcheck(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'readcheck' field must be of type 'bool'"
        self._readcheck = value

    @builtins.property
    def vectorcnt(self):
        """Message field 'vectorcnt'."""
        return self._vectorcnt

    @vectorcnt.setter
    def vectorcnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vectorcnt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vectorcnt' field must be an integer in [-2147483648, 2147483647]"
        self._vectorcnt = value

    @builtins.property
    def motionstate(self):
        """Message field 'motionstate'."""
        return self._motionstate

    @motionstate.setter
    def motionstate(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'motionstate' array.array() must have the type code of 'i'"
            self._motionstate = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'motionstate' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._motionstate = array.array('i', value)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'id' array.array() must have the type code of 'i'"
            self._id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'id' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._id = array.array('i', value)

    @builtins.property
    def motionlist(self):
        """Message field 'motionlist'."""
        return self._motionlist

    @motionlist.setter
    def motionlist(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'motionlist' array.array() must have the type code of 'i'"
            self._motionlist = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'motionlist' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._motionlist = array.array('i', value)

    @builtins.property
    def relativedata(self):
        """Message field 'relativedata'."""
        return self._relativedata

    @relativedata.setter
    def relativedata(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'relativedata' array.array() must have the type code of 'i'"
            self._relativedata = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'relativedata' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._relativedata = array.array('i', value)

    @builtins.property
    def absolutedata(self):
        """Message field 'absolutedata'."""
        return self._absolutedata

    @absolutedata.setter
    def absolutedata(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'absolutedata' array.array() must have the type code of 'i'"
            self._absolutedata = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'absolutedata' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._absolutedata = array.array('i', value)


class Metaclass_ReadMotion(type):
    """Metaclass of service 'ReadMotion'."""

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
                'tku_msgs.srv.ReadMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__read_motion

            from tku_msgs.srv import _read_motion
            if _read_motion.Metaclass_ReadMotion_Request._TYPE_SUPPORT is None:
                _read_motion.Metaclass_ReadMotion_Request.__import_type_support__()
            if _read_motion.Metaclass_ReadMotion_Response._TYPE_SUPPORT is None:
                _read_motion.Metaclass_ReadMotion_Response.__import_type_support__()


class ReadMotion(metaclass=Metaclass_ReadMotion):
    from tku_msgs.srv._read_motion import ReadMotion_Request as Request
    from tku_msgs.srv._read_motion import ReadMotion_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
