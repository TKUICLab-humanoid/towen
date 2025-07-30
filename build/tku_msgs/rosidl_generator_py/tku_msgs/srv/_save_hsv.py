# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tku_msgs:srv/SaveHSV.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveHSV_Request(type):
    """Metaclass of message 'SaveHSV_Request'."""

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
                'tku_msgs.srv.SaveHSV_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_hsv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_hsv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_hsv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_hsv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_hsv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveHSV_Request(metaclass=Metaclass_SaveHSV_Request):
    """Message class 'SaveHSV_Request'."""

    __slots__ = [
        '_save',
        '_location',
    ]

    _fields_and_field_types = {
        'save': 'boolean',
        'location': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.save = kwargs.get('save', bool())
        self.location = kwargs.get('location', str())

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
        if self.save != other.save:
            return False
        if self.location != other.location:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def save(self):
        """Message field 'save'."""
        return self._save

    @save.setter
    def save(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'save' field must be of type 'bool'"
        self._save = value

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'location' field must be of type 'str'"
        self._location = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SaveHSV_Response(type):
    """Metaclass of message 'SaveHSV_Response'."""

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
                'tku_msgs.srv.SaveHSV_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_hsv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_hsv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_hsv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_hsv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_hsv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveHSV_Response(metaclass=Metaclass_SaveHSV_Response):
    """Message class 'SaveHSV_Response'."""

    __slots__ = [
        '_already',
    ]

    _fields_and_field_types = {
        'already': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.already = kwargs.get('already', bool())

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
        if self.already != other.already:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def already(self):
        """Message field 'already'."""
        return self._already

    @already.setter
    def already(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'already' field must be of type 'bool'"
        self._already = value


class Metaclass_SaveHSV(type):
    """Metaclass of service 'SaveHSV'."""

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
                'tku_msgs.srv.SaveHSV')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__save_hsv

            from tku_msgs.srv import _save_hsv
            if _save_hsv.Metaclass_SaveHSV_Request._TYPE_SUPPORT is None:
                _save_hsv.Metaclass_SaveHSV_Request.__import_type_support__()
            if _save_hsv.Metaclass_SaveHSV_Response._TYPE_SUPPORT is None:
                _save_hsv.Metaclass_SaveHSV_Response.__import_type_support__()


class SaveHSV(metaclass=Metaclass_SaveHSV):
    from tku_msgs.srv._save_hsv import SaveHSV_Request as Request
    from tku_msgs.srv._save_hsv import SaveHSV_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
