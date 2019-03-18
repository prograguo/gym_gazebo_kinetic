// Generated by gencpp from file yocs_msgs/TrajectoryList.msg
// DO NOT EDIT!


#ifndef YOCS_MSGS_MESSAGE_TRAJECTORYLIST_H
#define YOCS_MSGS_MESSAGE_TRAJECTORYLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <yocs_msgs/Trajectory.h>

namespace yocs_msgs
{
template <class ContainerAllocator>
struct TrajectoryList_
{
  typedef TrajectoryList_<ContainerAllocator> Type;

  TrajectoryList_()
    : trajectories()  {
    }
  TrajectoryList_(const ContainerAllocator& _alloc)
    : trajectories(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::yocs_msgs::Trajectory_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::yocs_msgs::Trajectory_<ContainerAllocator> >::other >  _trajectories_type;
  _trajectories_type trajectories;





  typedef boost::shared_ptr< ::yocs_msgs::TrajectoryList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yocs_msgs::TrajectoryList_<ContainerAllocator> const> ConstPtr;

}; // struct TrajectoryList_

typedef ::yocs_msgs::TrajectoryList_<std::allocator<void> > TrajectoryList;

typedef boost::shared_ptr< ::yocs_msgs::TrajectoryList > TrajectoryListPtr;
typedef boost::shared_ptr< ::yocs_msgs::TrajectoryList const> TrajectoryListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yocs_msgs::TrajectoryList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace yocs_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'yocs_msgs': ['/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/src/yocs_msgs/msg', '/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/devel/share/yocs_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::TrajectoryList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::TrajectoryList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::TrajectoryList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f0901d378c8ac2d2d3d8feafaa343a58";
  }

  static const char* value(const ::yocs_msgs::TrajectoryList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf0901d378c8ac2d2ULL;
  static const uint64_t static_value2 = 0xd3d8feafaa343a58ULL;
};

template<class ContainerAllocator>
struct DataType< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yocs_msgs/TrajectoryList";
  }

  static const char* value(const ::yocs_msgs::TrajectoryList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A list of trajectories\n\
Trajectory[] trajectories\n\
\n\
================================================================================\n\
MSG: yocs_msgs/Trajectory\n\
# A named list of way points\n\
Header header\n\
string name\n\
Waypoint[] waypoints\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: yocs_msgs/Waypoint\n\
Header header\n\
string name\n\
geometry_msgs/Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::yocs_msgs::TrajectoryList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajectories);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrajectoryList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yocs_msgs::TrajectoryList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yocs_msgs::TrajectoryList_<ContainerAllocator>& v)
  {
    s << indent << "trajectories[]" << std::endl;
    for (size_t i = 0; i < v.trajectories.size(); ++i)
    {
      s << indent << "  trajectories[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::yocs_msgs::Trajectory_<ContainerAllocator> >::stream(s, indent + "    ", v.trajectories[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOCS_MSGS_MESSAGE_TRAJECTORYLIST_H
