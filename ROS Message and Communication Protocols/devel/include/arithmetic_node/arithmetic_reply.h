// Generated by gencpp from file arithmetic_node/arithmetic_reply.msg
// DO NOT EDIT!


#ifndef ARITHMETIC_NODE_MESSAGE_ARITHMETIC_REPLY_H
#define ARITHMETIC_NODE_MESSAGE_ARITHMETIC_REPLY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace arithmetic_node
{
template <class ContainerAllocator>
struct arithmetic_reply_
{
  typedef arithmetic_reply_<ContainerAllocator> Type;

  arithmetic_reply_()
    : header()
    , oper_type()
    , answer(0.0)
    , time_received(0.0)
    , time_answered(0.0)
    , process_time(0.0)  {
    }
  arithmetic_reply_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , oper_type(_alloc)
    , answer(0.0)
    , time_received(0.0)
    , time_answered(0.0)
    , process_time(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _oper_type_type;
  _oper_type_type oper_type;

   typedef float _answer_type;
  _answer_type answer;

   typedef double _time_received_type;
  _time_received_type time_received;

   typedef double _time_answered_type;
  _time_answered_type time_answered;

   typedef double _process_time_type;
  _process_time_type process_time;





  typedef boost::shared_ptr< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> const> ConstPtr;

}; // struct arithmetic_reply_

typedef ::arithmetic_node::arithmetic_reply_<std::allocator<void> > arithmetic_reply;

typedef boost::shared_ptr< ::arithmetic_node::arithmetic_reply > arithmetic_replyPtr;
typedef boost::shared_ptr< ::arithmetic_node::arithmetic_reply const> arithmetic_replyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arithmetic_node::arithmetic_reply_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::arithmetic_node::arithmetic_reply_<ContainerAllocator1> & lhs, const ::arithmetic_node::arithmetic_reply_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.oper_type == rhs.oper_type &&
    lhs.answer == rhs.answer &&
    lhs.time_received == rhs.time_received &&
    lhs.time_answered == rhs.time_answered &&
    lhs.process_time == rhs.process_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::arithmetic_node::arithmetic_reply_<ContainerAllocator1> & lhs, const ::arithmetic_node::arithmetic_reply_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace arithmetic_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cff965eb480643e73d2e8348f0d32d0e";
  }

  static const char* value(const ::arithmetic_node::arithmetic_reply_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcff965eb480643e7ULL;
  static const uint64_t static_value2 = 0x3d2e8348f0d32d0eULL;
};

template<class ContainerAllocator>
struct DataType< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arithmetic_node/arithmetic_reply";
  }

  static const char* value(const ::arithmetic_node::arithmetic_reply_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string oper_type\n"
"float32 answer\n"
"float64 time_received\n"
"float64 time_answered\n"
"float64 process_time\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::arithmetic_node::arithmetic_reply_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.oper_type);
      stream.next(m.answer);
      stream.next(m.time_received);
      stream.next(m.time_answered);
      stream.next(m.process_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct arithmetic_reply_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arithmetic_node::arithmetic_reply_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arithmetic_node::arithmetic_reply_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "oper_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.oper_type);
    s << indent << "answer: ";
    Printer<float>::stream(s, indent + "  ", v.answer);
    s << indent << "time_received: ";
    Printer<double>::stream(s, indent + "  ", v.time_received);
    s << indent << "time_answered: ";
    Printer<double>::stream(s, indent + "  ", v.time_answered);
    s << indent << "process_time: ";
    Printer<double>::stream(s, indent + "  ", v.process_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARITHMETIC_NODE_MESSAGE_ARITHMETIC_REPLY_H
