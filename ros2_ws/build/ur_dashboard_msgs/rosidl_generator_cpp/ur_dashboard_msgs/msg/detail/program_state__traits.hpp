// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_dashboard_msgs:msg/ProgramState.idl
// generated code does not contain a copyright notice

#ifndef UR_DASHBOARD_MSGS__MSG__DETAIL__PROGRAM_STATE__TRAITS_HPP_
#define UR_DASHBOARD_MSGS__MSG__DETAIL__PROGRAM_STATE__TRAITS_HPP_

#include "ur_dashboard_msgs/msg/detail/program_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::msg::ProgramState>()
{
  return "ur_dashboard_msgs::msg::ProgramState";
}

template<>
inline const char * name<ur_dashboard_msgs::msg::ProgramState>()
{
  return "ur_dashboard_msgs/msg/ProgramState";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::msg::ProgramState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::msg::ProgramState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_dashboard_msgs::msg::ProgramState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UR_DASHBOARD_MSGS__MSG__DETAIL__PROGRAM_STATE__TRAITS_HPP_
