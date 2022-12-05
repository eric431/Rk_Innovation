// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ublox_msgs:msg/EsfRAW.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/esf_raw__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ublox_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ublox_msgs/msg/detail/esf_raw__struct.h"
#include "ublox_msgs/msg/detail/esf_raw__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ublox_msgs/msg/detail/esf_raw_block__functions.h"  // blocks

// forward declare type support functions
size_t get_serialized_size_ublox_msgs__msg__EsfRAWBlock(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ublox_msgs__msg__EsfRAWBlock(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, EsfRAWBlock)();


using _EsfRAW__ros_msg_type = ublox_msgs__msg__EsfRAW;

static bool _EsfRAW__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsfRAW__ros_msg_type * ros_message = static_cast<const _EsfRAW__ros_msg_type *>(untyped_ros_message);
  // Field name: reserved0
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserved0;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: blocks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, EsfRAWBlock
      )()->data);
    size_t size = ros_message->blocks.size;
    auto array_ptr = ros_message->blocks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _EsfRAW__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsfRAW__ros_msg_type * ros_message = static_cast<_EsfRAW__ros_msg_type *>(untyped_ros_message);
  // Field name: reserved0
  {
    size_t size = 4;
    auto array_ptr = ros_message->reserved0;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: blocks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ublox_msgs, msg, EsfRAWBlock
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->blocks.data) {
      ublox_msgs__msg__EsfRAWBlock__Sequence__fini(&ros_message->blocks);
    }
    if (!ublox_msgs__msg__EsfRAWBlock__Sequence__init(&ros_message->blocks, size)) {
      fprintf(stderr, "failed to create array for field 'blocks'");
      return false;
    }
    auto array_ptr = ros_message->blocks.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t get_serialized_size_ublox_msgs__msg__EsfRAW(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsfRAW__ros_msg_type * ros_message = static_cast<const _EsfRAW__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name reserved0
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->reserved0;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blocks
  {
    size_t array_size = ros_message->blocks.size;
    auto array_ptr = ros_message->blocks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ublox_msgs__msg__EsfRAWBlock(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsfRAW__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ublox_msgs__msg__EsfRAW(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ublox_msgs
size_t max_serialized_size_ublox_msgs__msg__EsfRAW(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: reserved0
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blocks
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_ublox_msgs__msg__EsfRAWBlock(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _EsfRAW__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ublox_msgs__msg__EsfRAW(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EsfRAW = {
  "ublox_msgs::msg",
  "EsfRAW",
  _EsfRAW__cdr_serialize,
  _EsfRAW__cdr_deserialize,
  _EsfRAW__get_serialized_size,
  _EsfRAW__max_serialized_size
};

static rosidl_message_type_support_t _EsfRAW__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsfRAW,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ublox_msgs, msg, EsfRAW)() {
  return &_EsfRAW__type_support;
}

#if defined(__cplusplus)
}
#endif
