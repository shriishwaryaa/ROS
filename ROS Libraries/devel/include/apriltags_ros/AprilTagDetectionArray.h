// Generated by gencpp from file apriltags_ros/AprilTagDetectionArray.msg
// DO NOT EDIT!


#ifndef APRILTAGS_ROS_MESSAGE_APRILTAGDETECTIONARRAY_H
#define APRILTAGS_ROS_MESSAGE_APRILTAGDETECTIONARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <apriltags_ros/AprilTagDetection.h>

namespace apriltags_ros
{
template <class ContainerAllocator>
struct AprilTagDetectionArray_
{
  typedef AprilTagDetectionArray_<ContainerAllocator> Type;

  AprilTagDetectionArray_()
    : detections()  {
    }
  AprilTagDetectionArray_(const ContainerAllocator& _alloc)
    : detections(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::apriltags_ros::AprilTagDetection_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::apriltags_ros::AprilTagDetection_<ContainerAllocator> >> _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTagDetectionArray_

typedef ::apriltags_ros::AprilTagDetectionArray_<std::allocator<void> > AprilTagDetectionArray;

typedef boost::shared_ptr< ::apriltags_ros::AprilTagDetectionArray > AprilTagDetectionArrayPtr;
typedef boost::shared_ptr< ::apriltags_ros::AprilTagDetectionArray const> AprilTagDetectionArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator1> & lhs, const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator2> & rhs)
{
  return lhs.detections == rhs.detections;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator1> & lhs, const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace apriltags_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93c0a301ed9e6633dc34b8117d49ebd4";
  }

  static const char* value(const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93c0a301ed9e6633ULL;
  static const uint64_t static_value2 = 0xdc34b8117d49ebd4ULL;
};

template<class ContainerAllocator>
struct DataType< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "apriltags_ros/AprilTagDetectionArray";
  }

  static const char* value(const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "AprilTagDetection[] detections\n"
"================================================================================\n"
"MSG: apriltags_ros/AprilTagDetection\n"
"int32 id\n"
"float64 size\n"
"geometry_msgs/PoseStamped pose\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
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
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AprilTagDetectionArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::apriltags_ros::AprilTagDetectionArray_<ContainerAllocator>& v)
  {
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::apriltags_ros::AprilTagDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // APRILTAGS_ROS_MESSAGE_APRILTAGDETECTIONARRAY_H
