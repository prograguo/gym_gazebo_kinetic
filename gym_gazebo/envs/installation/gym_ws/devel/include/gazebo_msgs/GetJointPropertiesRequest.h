// Generated by gencpp from file gazebo_msgs/GetJointPropertiesRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_GETJOINTPROPERTIESREQUEST_H
#define GAZEBO_MSGS_MESSAGE_GETJOINTPROPERTIESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct GetJointPropertiesRequest_
{
  typedef GetJointPropertiesRequest_<ContainerAllocator> Type;

  GetJointPropertiesRequest_()
    : joint_name()  {
    }
  GetJointPropertiesRequest_(const ContainerAllocator& _alloc)
    : joint_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _joint_name_type;
  _joint_name_type joint_name;





  typedef boost::shared_ptr< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetJointPropertiesRequest_

typedef ::gazebo_msgs::GetJointPropertiesRequest_<std::allocator<void> > GetJointPropertiesRequest;

typedef boost::shared_ptr< ::gazebo_msgs::GetJointPropertiesRequest > GetJointPropertiesRequestPtr;
typedef boost::shared_ptr< ::gazebo_msgs::GetJointPropertiesRequest const> GetJointPropertiesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'gazebo_msgs': ['/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/src/gazebo_ros_pkgs/gazebo_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0be1351618e1dc030eb7959d9a4902de";
  }

  static const char* value(const ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0be1351618e1dc03ULL;
  static const uint64_t static_value2 = 0x0eb7959d9a4902deULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/GetJointPropertiesRequest";
  }

  static const char* value(const ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string joint_name\n\
";
  }

  static const char* value(const ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJointPropertiesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::GetJointPropertiesRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_GETJOINTPROPERTIESREQUEST_H
