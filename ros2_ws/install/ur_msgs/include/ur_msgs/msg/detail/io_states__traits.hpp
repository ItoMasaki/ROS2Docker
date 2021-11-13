// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_msgs:msg/IOStates.idl
// generated code does not contain a copyright notice

#ifndef UR_MSGS__MSG__DETAIL__IO_STATES__TRAITS_HPP_
#define UR_MSGS__MSG__DETAIL__IO_STATES__TRAITS_HPP_

#include "ur_msgs/msg/detail/io_states__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_msgs::msg::IOStates>()
{
  return "ur_msgs::msg::IOStates";
}

template<>
inline const char * name<ur_msgs::msg::IOStates>()
{
  return "ur_msgs/msg/IOStates";
}

template<>
struct has_fixed_size<ur_msgs::msg::IOStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_msgs::msg::IOStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_msgs::msg::IOStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UR_MSGS__MSG__DETAIL__IO_STATES__TRAITS_HPP_
