// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_dashboard_msgs:srv/RawRequest.idl
// generated code does not contain a copyright notice

#ifndef UR_DASHBOARD_MSGS__SRV__DETAIL__RAW_REQUEST__TRAITS_HPP_
#define UR_DASHBOARD_MSGS__SRV__DETAIL__RAW_REQUEST__TRAITS_HPP_

#include "ur_dashboard_msgs/srv/detail/raw_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::srv::RawRequest_Request>()
{
  return "ur_dashboard_msgs::srv::RawRequest_Request";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::RawRequest_Request>()
{
  return "ur_dashboard_msgs/srv/RawRequest_Request";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::RawRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::RawRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_dashboard_msgs::srv::RawRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::srv::RawRequest_Response>()
{
  return "ur_dashboard_msgs::srv::RawRequest_Response";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::RawRequest_Response>()
{
  return "ur_dashboard_msgs/srv/RawRequest_Response";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::RawRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::RawRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_dashboard_msgs::srv::RawRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::srv::RawRequest>()
{
  return "ur_dashboard_msgs::srv::RawRequest";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::RawRequest>()
{
  return "ur_dashboard_msgs/srv/RawRequest";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::RawRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_dashboard_msgs::srv::RawRequest_Request>::value &&
    has_fixed_size<ur_dashboard_msgs::srv::RawRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::RawRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_dashboard_msgs::srv::RawRequest_Request>::value &&
    has_bounded_size<ur_dashboard_msgs::srv::RawRequest_Response>::value
  >
{
};

template<>
struct is_service<ur_dashboard_msgs::srv::RawRequest>
  : std::true_type
{
};

template<>
struct is_service_request<ur_dashboard_msgs::srv::RawRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_dashboard_msgs::srv::RawRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR_DASHBOARD_MSGS__SRV__DETAIL__RAW_REQUEST__TRAITS_HPP_
