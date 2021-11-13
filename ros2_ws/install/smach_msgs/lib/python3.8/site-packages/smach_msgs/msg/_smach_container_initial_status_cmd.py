# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'local_data'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SmachContainerInitialStatusCmd(type):
    """Metaclass of message 'SmachContainerInitialStatusCmd'."""

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
            module = import_type_support('smach_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'smach_msgs.msg.SmachContainerInitialStatusCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__smach_container_initial_status_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__smach_container_initial_status_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__smach_container_initial_status_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__smach_container_initial_status_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__smach_container_initial_status_cmd

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmachContainerInitialStatusCmd(metaclass=Metaclass_SmachContainerInitialStatusCmd):
    """Message class 'SmachContainerInitialStatusCmd'."""

    __slots__ = [
        '_path',
        '_initial_states',
        '_local_data',
    ]

    _fields_and_field_types = {
        'path': 'string',
        'initial_states': 'sequence<string>',
        'local_data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.path = kwargs.get('path', str())
        self.initial_states = kwargs.get('initial_states', [])
        self.local_data = array.array('B', kwargs.get('local_data', []))

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
        if self.path != other.path:
            return False
        if self.initial_states != other.initial_states:
            return False
        if self.local_data != other.local_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'path' field must be of type 'str'"
        self._path = value

    @property
    def initial_states(self):
        """Message field 'initial_states'."""
        return self._initial_states

    @initial_states.setter
    def initial_states(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'initial_states' field must be a set or sequence and each value of type 'str'"
        self._initial_states = value

    @property
    def local_data(self):
        """Message field 'local_data'."""
        return self._local_data

    @local_data.setter
    def local_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'local_data' array.array() must have the type code of 'B'"
            self._local_data = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'local_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._local_data = array.array('B', value)
