// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_dashboard_msgs:action/SetMode.idl
// generated code does not contain a copyright notice

#ifndef UR_DASHBOARD_MSGS__ACTION__DETAIL__SET_MODE__TRAITS_HPP_
#define UR_DASHBOARD_MSGS__ACTION__DETAIL__SET_MODE__TRAITS_HPP_

#include "ur_dashboard_msgs/action/detail/set_mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_Goal>()
{
  return "ur_dashboard_msgs::action::SetMode_Goal";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_Goal>()
{
  return "ur_dashboard_msgs/action/SetMode_Goal";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_dashboard_msgs::action::SetMode_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_Result>()
{
  return "ur_dashboard_msgs::action::SetMode_Result";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_Result>()
{
  return "ur_dashboard_msgs/action/SetMode_Result";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_dashboard_msgs::action::SetMode_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_Feedback>()
{
  return "ur_dashboard_msgs::action::SetMode_Feedback";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_Feedback>()
{
  return "ur_dashboard_msgs/action/SetMode_Feedback";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_dashboard_msgs::action::SetMode_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ur_dashboard_msgs/action/detail/set_mode__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_SendGoal_Request>()
{
  return "ur_dashboard_msgs::action::SetMode_SendGoal_Request";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_SendGoal_Request>()
{
  return "ur_dashboard_msgs/action/SetMode_SendGoal_Request";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_dashboard_msgs::action::SetMode_Goal>::value> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_dashboard_msgs::action::SetMode_Goal>::value> {};

template<>
struct is_message<ur_dashboard_msgs::action::SetMode_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_SendGoal_Response>()
{
  return "ur_dashboard_msgs::action::SetMode_SendGoal_Response";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_SendGoal_Response>()
{
  return "ur_dashboard_msgs/action/SetMode_SendGoal_Response";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ur_dashboard_msgs::action::SetMode_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_SendGoal>()
{
  return "ur_dashboard_msgs::action::SetMode_SendGoal";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_SendGoal>()
{
  return "ur_dashboard_msgs/action/SetMode_SendGoal";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_dashboard_msgs::action::SetMode_SendGoal_Request>::value &&
    has_fixed_size<ur_dashboard_msgs::action::SetMode_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_dashboard_msgs::action::SetMode_SendGoal_Request>::value &&
    has_bounded_size<ur_dashboard_msgs::action::SetMode_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ur_dashboard_msgs::action::SetMode_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ur_dashboard_msgs::action::SetMode_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_dashboard_msgs::action::SetMode_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_GetResult_Request>()
{
  return "ur_dashboard_msgs::action::SetMode_GetResult_Request";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_GetResult_Request>()
{
  return "ur_dashboard_msgs/action/SetMode_GetResult_Request";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ur_dashboard_msgs::action::SetMode_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ur_dashboard_msgs/action/detail/set_mode__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_GetResult_Response>()
{
  return "ur_dashboard_msgs::action::SetMode_GetResult_Response";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_GetResult_Response>()
{
  return "ur_dashboard_msgs/action/SetMode_GetResult_Response";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ur_dashboard_msgs::action::SetMode_Result>::value> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ur_dashboard_msgs::action::SetMode_Result>::value> {};

template<>
struct is_message<ur_dashboard_msgs::action::SetMode_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_GetResult>()
{
  return "ur_dashboard_msgs::action::SetMode_GetResult";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_GetResult>()
{
  return "ur_dashboard_msgs/action/SetMode_GetResult";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_dashboard_msgs::action::SetMode_GetResult_Request>::value &&
    has_fixed_size<ur_dashboard_msgs::action::SetMode_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_dashboard_msgs::action::SetMode_GetResult_Request>::value &&
    has_bounded_size<ur_dashboard_msgs::action::SetMode_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ur_dashboard_msgs::action::SetMode_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ur_dashboard_msgs::action::SetMode_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_dashboard_msgs::action::SetMode_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ur_dashboard_msgs/action/detail/set_mode__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::action::SetMode_FeedbackMessage>()
{
  return "ur_dashboard_msgs::action::SetMode_FeedbackMessage";
}

template<>
inline const char * name<ur_dashboard_msgs::action::SetMode_FeedbackMessage>()
{
  return "ur_dashboard_msgs/action/SetMode_FeedbackMessage";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::action::SetMode_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<ur_dashboard_msgs::action::SetMode_Feedback>::value> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::action::SetMode_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<ur_dashboard_msgs::action::SetMode_Feedback>::value> {};

template<>
struct is_message<ur_dashboard_msgs::action::SetMode_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ur_dashboard_msgs::action::SetMode>
  : std::true_type
{
};

template<>
struct is_action_goal<ur_dashboard_msgs::action::SetMode_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ur_dashboard_msgs::action::SetMode_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ur_dashboard_msgs::action::SetMode_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // UR_DASHBOARD_MSGS__ACTION__DETAIL__SET_MODE__TRAITS_HPP_
