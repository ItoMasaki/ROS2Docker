// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smach_msgs:msg/SmachContainerInitialStatusCmd.idl
// generated code does not contain a copyright notice

#ifndef SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__TRAITS_HPP_
#define SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__TRAITS_HPP_

#include "smach_msgs/msg/detail/smach_container_initial_status_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<smach_msgs::msg::SmachContainerInitialStatusCmd>()
{
  return "smach_msgs::msg::SmachContainerInitialStatusCmd";
}

template<>
inline const char * name<smach_msgs::msg::SmachContainerInitialStatusCmd>()
{
  return "smach_msgs/msg/SmachContainerInitialStatusCmd";
}

template<>
struct has_fixed_size<smach_msgs::msg::SmachContainerInitialStatusCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smach_msgs::msg::SmachContainerInitialStatusCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smach_msgs::msg::SmachContainerInitialStatusCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMACH_MSGS__MSG__DETAIL__SMACH_CONTAINER_INITIAL_STATUS_CMD__TRAITS_HPP_
