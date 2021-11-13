// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_dashboard_msgs:srv/GetRobotMode.idl
// generated code does not contain a copyright notice

#ifndef UR_DASHBOARD_MSGS__SRV__DETAIL__GET_ROBOT_MODE__TRAITS_HPP_
#define UR_DASHBOARD_MSGS__SRV__DETAIL__GET_ROBOT_MODE__TRAITS_HPP_

#include "ur_dashboard_msgs/srv/detail/get_robot_mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::srv::GetRobotMode_Request>()
{
  return "ur_dashboard_msgs::srv::GetRobotMode_Request";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::GetRobotMode_Request>()
{
  return "ur_dashboard_msgs/srv/GetRobotMode_Request";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::GetRobotMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::GetRobotMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_dashboard_msgs::srv::GetRobotMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'robot_mode'
#include "ur_dashboard_msgs/msg/detail/robot_mode__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::srv::GetRobotMode_Response>()
{
  return "ur_dashboard_msgs::srv::GetRobotMode_Response";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::GetRobotMode_Response>()
{
  return "ur_dashboard_msgs/srv/GetRobotMode_Response";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::GetRobotMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::GetRobotMode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_dashboard_msgs::srv::GetRobotMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::srv::GetRobotMode>()
{
  return "ur_dashboard_msgs::srv::GetRobotMode";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::GetRobotMode>()
{
  return "ur_dashboard_msgs/srv/GetRobotMode";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::GetRobotMode>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_dashboard_msgs::srv::GetRobotMode_Request>::value &&
    has_fixed_size<ur_dashboard_msgs::srv::GetRobotMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::GetRobotMode>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_dashboard_msgs::srv::GetRobotMode_Request>::value &&
    has_bounded_size<ur_dashboard_msgs::srv::GetRobotMode_Response>::value
  >
{
};

template<>
struct is_service<ur_dashboard_msgs::srv::GetRobotMode>
  : std::true_type
{
};

template<>
struct is_service_request<ur_dashboard_msgs::srv::GetRobotMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_dashboard_msgs::srv::GetRobotMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR_DASHBOARD_MSGS__SRV__DETAIL__GET_ROBOT_MODE__TRAITS_HPP_
