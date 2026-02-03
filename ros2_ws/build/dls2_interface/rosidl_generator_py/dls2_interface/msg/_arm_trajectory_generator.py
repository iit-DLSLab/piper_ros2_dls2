# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dls2_interface:msg/ArmTrajectoryGenerator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'desired_arm_joints_position'
# Member 'desired_arm_joints_velocity'
# Member 'arm_kp'
# Member 'arm_kd'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmTrajectoryGenerator(type):
    """Metaclass of message 'ArmTrajectoryGenerator'."""

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
                'dls2_interface.msg.ArmTrajectoryGenerator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_trajectory_generator
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_trajectory_generator
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_trajectory_generator
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_trajectory_generator
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_trajectory_generator

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmTrajectoryGenerator(metaclass=Metaclass_ArmTrajectoryGenerator):
    """Message class 'ArmTrajectoryGenerator'."""

    __slots__ = [
        '_frame_id',
        '_sequence_id',
        '_timestamp',
        '_desired_arm_joints_position',
        '_desired_arm_joints_velocity',
        '_desired_arm_gripper_position',
        '_desired_arm_gripper_velocity',
        '_arm_kp',
        '_arm_kd',
    ]

    _fields_and_field_types = {
        'frame_id': 'string',
        'sequence_id': 'uint32',
        'timestamp': 'double',
        'desired_arm_joints_position': 'double[6]',
        'desired_arm_joints_velocity': 'double[6]',
        'desired_arm_gripper_position': 'double',
        'desired_arm_gripper_velocity': 'double',
        'arm_kp': 'double[6]',
        'arm_kd': 'double[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frame_id = kwargs.get('frame_id', str())
        self.sequence_id = kwargs.get('sequence_id', int())
        self.timestamp = kwargs.get('timestamp', float())
        if 'desired_arm_joints_position' not in kwargs:
            self.desired_arm_joints_position = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.desired_arm_joints_position = numpy.array(kwargs.get('desired_arm_joints_position'), dtype=numpy.float64)
            assert self.desired_arm_joints_position.shape == (6, )
        if 'desired_arm_joints_velocity' not in kwargs:
            self.desired_arm_joints_velocity = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.desired_arm_joints_velocity = numpy.array(kwargs.get('desired_arm_joints_velocity'), dtype=numpy.float64)
            assert self.desired_arm_joints_velocity.shape == (6, )
        self.desired_arm_gripper_position = kwargs.get('desired_arm_gripper_position', float())
        self.desired_arm_gripper_velocity = kwargs.get('desired_arm_gripper_velocity', float())
        if 'arm_kp' not in kwargs:
            self.arm_kp = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.arm_kp = numpy.array(kwargs.get('arm_kp'), dtype=numpy.float64)
            assert self.arm_kp.shape == (6, )
        if 'arm_kd' not in kwargs:
            self.arm_kd = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.arm_kd = numpy.array(kwargs.get('arm_kd'), dtype=numpy.float64)
            assert self.arm_kd.shape == (6, )

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
        if all(self.desired_arm_joints_position != other.desired_arm_joints_position):
            return False
        if all(self.desired_arm_joints_velocity != other.desired_arm_joints_velocity):
            return False
        if self.desired_arm_gripper_position != other.desired_arm_gripper_position:
            return False
        if self.desired_arm_gripper_velocity != other.desired_arm_gripper_velocity:
            return False
        if all(self.arm_kp != other.arm_kp):
            return False
        if all(self.arm_kd != other.arm_kd):
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
    def desired_arm_joints_position(self):
        """Message field 'desired_arm_joints_position'."""
        return self._desired_arm_joints_position

    @desired_arm_joints_position.setter
    def desired_arm_joints_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'desired_arm_joints_position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'desired_arm_joints_position' numpy.ndarray() must have a size of 6"
            self._desired_arm_joints_position = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'desired_arm_joints_position' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._desired_arm_joints_position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def desired_arm_joints_velocity(self):
        """Message field 'desired_arm_joints_velocity'."""
        return self._desired_arm_joints_velocity

    @desired_arm_joints_velocity.setter
    def desired_arm_joints_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'desired_arm_joints_velocity' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'desired_arm_joints_velocity' numpy.ndarray() must have a size of 6"
            self._desired_arm_joints_velocity = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'desired_arm_joints_velocity' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._desired_arm_joints_velocity = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def desired_arm_gripper_position(self):
        """Message field 'desired_arm_gripper_position'."""
        return self._desired_arm_gripper_position

    @desired_arm_gripper_position.setter
    def desired_arm_gripper_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_arm_gripper_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'desired_arm_gripper_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._desired_arm_gripper_position = value

    @builtins.property
    def desired_arm_gripper_velocity(self):
        """Message field 'desired_arm_gripper_velocity'."""
        return self._desired_arm_gripper_velocity

    @desired_arm_gripper_velocity.setter
    def desired_arm_gripper_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_arm_gripper_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'desired_arm_gripper_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._desired_arm_gripper_velocity = value

    @builtins.property
    def arm_kp(self):
        """Message field 'arm_kp'."""
        return self._arm_kp

    @arm_kp.setter
    def arm_kp(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'arm_kp' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'arm_kp' numpy.ndarray() must have a size of 6"
            self._arm_kp = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'arm_kp' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._arm_kp = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def arm_kd(self):
        """Message field 'arm_kd'."""
        return self._arm_kd

    @arm_kd.setter
    def arm_kd(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'arm_kd' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'arm_kd' numpy.ndarray() must have a size of 6"
            self._arm_kd = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'arm_kd' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._arm_kd = numpy.array(value, dtype=numpy.float64)
