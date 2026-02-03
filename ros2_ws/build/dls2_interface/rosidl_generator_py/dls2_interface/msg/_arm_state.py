# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dls2_interface:msg/ArmState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'joints_position'
# Member 'joints_velocity'
# Member 'joints_acceleration'
# Member 'joints_effort'
# Member 'joints_temperature'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmState(type):
    """Metaclass of message 'ArmState'."""

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
            module = import_type_support('dls2_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dls2_interface.msg.ArmState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmState(metaclass=Metaclass_ArmState):
    """Message class 'ArmState'."""

    __slots__ = [
        '_frame_id',
        '_sequence_id',
        '_timestamp',
        '_robot_name',
        '_joints_name',
        '_joints_position',
        '_joints_velocity',
        '_joints_acceleration',
        '_joints_effort',
        '_joints_temperature',
        '_gripper_position',
        '_gripper_velocity',
        '_gripper_effort',
    ]

    _fields_and_field_types = {
        'frame_id': 'string',
        'sequence_id': 'uint32',
        'timestamp': 'double',
        'robot_name': 'string',
        'joints_name': 'sequence<string>',
        'joints_position': 'sequence<double>',
        'joints_velocity': 'sequence<double>',
        'joints_acceleration': 'sequence<double>',
        'joints_effort': 'sequence<double>',
        'joints_temperature': 'sequence<double>',
        'gripper_position': 'double',
        'gripper_velocity': 'double',
        'gripper_effort': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frame_id = kwargs.get('frame_id', str())
        self.sequence_id = kwargs.get('sequence_id', int())
        self.timestamp = kwargs.get('timestamp', float())
        self.robot_name = kwargs.get('robot_name', str())
        self.joints_name = kwargs.get('joints_name', [])
        self.joints_position = array.array('d', kwargs.get('joints_position', []))
        self.joints_velocity = array.array('d', kwargs.get('joints_velocity', []))
        self.joints_acceleration = array.array('d', kwargs.get('joints_acceleration', []))
        self.joints_effort = array.array('d', kwargs.get('joints_effort', []))
        self.joints_temperature = array.array('d', kwargs.get('joints_temperature', []))
        self.gripper_position = kwargs.get('gripper_position', float())
        self.gripper_velocity = kwargs.get('gripper_velocity', float())
        self.gripper_effort = kwargs.get('gripper_effort', float())

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
        if self.frame_id != other.frame_id:
            return False
        if self.sequence_id != other.sequence_id:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.robot_name != other.robot_name:
            return False
        if self.joints_name != other.joints_name:
            return False
        if self.joints_position != other.joints_position:
            return False
        if self.joints_velocity != other.joints_velocity:
            return False
        if self.joints_acceleration != other.joints_acceleration:
            return False
        if self.joints_effort != other.joints_effort:
            return False
        if self.joints_temperature != other.joints_temperature:
            return False
        if self.gripper_position != other.gripper_position:
            return False
        if self.gripper_velocity != other.gripper_velocity:
            return False
        if self.gripper_effort != other.gripper_effort:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_id' field must be of type 'str'"
        self._frame_id = value

    @builtins.property
    def sequence_id(self):
        """Message field 'sequence_id'."""
        return self._sequence_id

    @sequence_id.setter
    def sequence_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequence_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sequence_id' field must be an unsigned integer in [0, 4294967295]"
        self._sequence_id = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timestamp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timestamp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timestamp = value

    @builtins.property
    def robot_name(self):
        """Message field 'robot_name'."""
        return self._robot_name

    @robot_name.setter
    def robot_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_name' field must be of type 'str'"
        self._robot_name = value

    @builtins.property
    def joints_name(self):
        """Message field 'joints_name'."""
        return self._joints_name

    @joints_name.setter
    def joints_name(self, value):
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
                "The 'joints_name' field must be a set or sequence and each value of type 'str'"
        self._joints_name = value

    @builtins.property
    def joints_position(self):
        """Message field 'joints_position'."""
        return self._joints_position

    @joints_position.setter
    def joints_position(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joints_position' array.array() must have the type code of 'd'"
            self._joints_position = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joints_position' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joints_position = array.array('d', value)

    @builtins.property
    def joints_velocity(self):
        """Message field 'joints_velocity'."""
        return self._joints_velocity

    @joints_velocity.setter
    def joints_velocity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joints_velocity' array.array() must have the type code of 'd'"
            self._joints_velocity = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joints_velocity' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joints_velocity = array.array('d', value)

    @builtins.property
    def joints_acceleration(self):
        """Message field 'joints_acceleration'."""
        return self._joints_acceleration

    @joints_acceleration.setter
    def joints_acceleration(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joints_acceleration' array.array() must have the type code of 'd'"
            self._joints_acceleration = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joints_acceleration' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joints_acceleration = array.array('d', value)

    @builtins.property
    def joints_effort(self):
        """Message field 'joints_effort'."""
        return self._joints_effort

    @joints_effort.setter
    def joints_effort(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joints_effort' array.array() must have the type code of 'd'"
            self._joints_effort = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joints_effort' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joints_effort = array.array('d', value)

    @builtins.property
    def joints_temperature(self):
        """Message field 'joints_temperature'."""
        return self._joints_temperature

    @joints_temperature.setter
    def joints_temperature(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joints_temperature' array.array() must have the type code of 'd'"
            self._joints_temperature = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'joints_temperature' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joints_temperature = array.array('d', value)

    @builtins.property
    def gripper_position(self):
        """Message field 'gripper_position'."""
        return self._gripper_position

    @gripper_position.setter
    def gripper_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripper_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripper_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripper_position = value

    @builtins.property
    def gripper_velocity(self):
        """Message field 'gripper_velocity'."""
        return self._gripper_velocity

    @gripper_velocity.setter
    def gripper_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripper_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripper_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripper_velocity = value

    @builtins.property
    def gripper_effort(self):
        """Message field 'gripper_effort'."""
        return self._gripper_effort

    @gripper_effort.setter
    def gripper_effort(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripper_effort' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripper_effort' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripper_effort = value
