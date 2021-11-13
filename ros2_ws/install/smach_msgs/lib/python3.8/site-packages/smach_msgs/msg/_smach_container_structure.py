# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smach_msgs:msg/SmachContainerStructure.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SmachContainerStructure(type):
    """Metaclass of message 'SmachContainerStructure'."""

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
                'smach_msgs.msg.SmachContainerStructure')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__smach_container_structure
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__smach_container_structure
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__smach_container_structure
            cls._TYPE_SUPPORT = module.type_support_msg__msg__smach_container_structure
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__smach_container_structure

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SmachContainerStructure(metaclass=Metaclass_SmachContainerStructure):
    """Message class 'SmachContainerStructure'."""

    __slots__ = [
        '_header',
        '_path',
        '_children',
        '_internal_outcomes',
        '_outcomes_from',
        '_outcomes_to',
        '_container_outcomes',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'path': 'string',
        'children': 'sequence<string>',
        'internal_outcomes': 'sequence<string>',
        'outcomes_from': 'sequence<string>',
        'outcomes_to': 'sequence<string>',
        'container_outcomes': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.path = kwargs.get('path', str())
        self.children = kwargs.get('children', [])
        self.internal_outcomes = kwargs.get('internal_outcomes', [])
        self.outcomes_from = kwargs.get('outcomes_from', [])
        self.outcomes_to = kwargs.get('outcomes_to', [])
        self.container_outcomes = kwargs.get('container_outcomes', [])

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
        if self.header != other.header:
            return False
        if self.path != other.path:
            return False
        if self.children != other.children:
            return False
        if self.internal_outcomes != other.internal_outcomes:
            return False
        if self.outcomes_from != other.outcomes_from:
            return False
        if self.outcomes_to != other.outcomes_to:
            return False
        if self.container_outcomes != other.container_outcomes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

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
    def children(self):
        """Message field 'children'."""
        return self._children

    @children.setter
    def children(self, value):
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
                "The 'children' field must be a set or sequence and each value of type 'str'"
        self._children = value

    @property
    def internal_outcomes(self):
        """Message field 'internal_outcomes'."""
        return self._internal_outcomes

    @internal_outcomes.setter
    def internal_outcomes(self, value):
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
                "The 'internal_outcomes' field must be a set or sequence and each value of type 'str'"
        self._internal_outcomes = value

    @property
    def outcomes_from(self):
        """Message field 'outcomes_from'."""
        return self._outcomes_from

    @outcomes_from.setter
    def outcomes_from(self, value):
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
                "The 'outcomes_from' field must be a set or sequence and each value of type 'str'"
        self._outcomes_from = value

    @property
    def outcomes_to(self):
        """Message field 'outcomes_to'."""
        return self._outcomes_to

    @outcomes_to.setter
    def outcomes_to(self, value):
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
                "The 'outcomes_to' field must be a set or sequence and each value of type 'str'"
        self._outcomes_to = value

    @property
    def container_outcomes(self):
        """Message field 'container_outcomes'."""
        return self._container_outcomes

    @container_outcomes.setter
    def container_outcomes(self, value):
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
                "The 'container_outcomes' field must be a set or sequence and each value of type 'str'"
        self._container_outcomes = value
