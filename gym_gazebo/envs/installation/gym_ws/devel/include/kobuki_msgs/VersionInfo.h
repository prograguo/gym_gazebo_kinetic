// Generated by gencpp from file kobuki_msgs/VersionInfo.msg
// DO NOT EDIT!


#ifndef KOBUKI_MSGS_MESSAGE_VERSIONINFO_H
#define KOBUKI_MSGS_MESSAGE_VERSIONINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kobuki_msgs
{
template <class ContainerAllocator>
struct VersionInfo_
{
  typedef VersionInfo_<ContainerAllocator> Type;

  VersionInfo_()
    : hardware()
    , firmware()
    , software()
    , udid()
    , features(0)  {
    }
  VersionInfo_(const ContainerAllocator& _alloc)
    : hardware(_alloc)
    , firmware(_alloc)
    , software(_alloc)
    , udid(_alloc)
    , features(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _hardware_type;
  _hardware_type hardware;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _firmware_type;
  _firmware_type firmware;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _software_type;
  _software_type software;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _udid_type;
  _udid_type udid;

   typedef uint64_t _features_type;
  _features_type features;



  enum {
    SMOOTH_MOVE_START = 1u,
    GYROSCOPE_3D_DATA = 2u,
  };


  typedef boost::shared_ptr< ::kobuki_msgs::VersionInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kobuki_msgs::VersionInfo_<ContainerAllocator> const> ConstPtr;

}; // struct VersionInfo_

typedef ::kobuki_msgs::VersionInfo_<std::allocator<void> > VersionInfo;

typedef boost::shared_ptr< ::kobuki_msgs::VersionInfo > VersionInfoPtr;
typedef boost::shared_ptr< ::kobuki_msgs::VersionInfo const> VersionInfoConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kobuki_msgs::VersionInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kobuki_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'kobuki_msgs': ['/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/src/kobuki_msgs/msg', '/home/zzl/RL/gym-gazebo/gym_gazebo/envs/installation/gym_ws/devel/share/kobuki_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kobuki_msgs::VersionInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kobuki_msgs::VersionInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kobuki_msgs::VersionInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3dc0ce6edd49be1fc86730f4a4a21861";
  }

  static const char* value(const ::kobuki_msgs::VersionInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3dc0ce6edd49be1fULL;
  static const uint64_t static_value2 = 0xc86730f4a4a21861ULL;
};

template<class ContainerAllocator>
struct DataType< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kobuki_msgs/VersionInfo";
  }

  static const char* value(const ::kobuki_msgs::VersionInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Contains unique device id, version info and available features for the kobuki platform.\n\
# Useful for compatibility checking and introspection\n\
\n\
string hardware   # <major>.<minor>.<patch>\n\
string firmware   # <major>.<minor>.<patch>\n\
string software   # Still to decide how it will look\n\
uint32[] udid\n\
\n\
# Bitmask that specifies the available features in the firmware and/or driver\n\
uint64 features\n\
\n\
# The following represent the bit fields corresponding to bits in the features value\n\
\n\
# Provided firmware kobuki_firmware_1.1.1.hex\n\
uint64 SMOOTH_MOVE_START    = 0000000000000001\n\
uint64 GYROSCOPE_3D_DATA    = 0000000000000002\n\
";
  }

  static const char* value(const ::kobuki_msgs::VersionInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hardware);
      stream.next(m.firmware);
      stream.next(m.software);
      stream.next(m.udid);
      stream.next(m.features);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VersionInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kobuki_msgs::VersionInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kobuki_msgs::VersionInfo_<ContainerAllocator>& v)
  {
    s << indent << "hardware: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.hardware);
    s << indent << "firmware: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.firmware);
    s << indent << "software: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.software);
    s << indent << "udid[]" << std::endl;
    for (size_t i = 0; i < v.udid.size(); ++i)
    {
      s << indent << "  udid[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.udid[i]);
    }
    s << indent << "features: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.features);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOBUKI_MSGS_MESSAGE_VERSIONINFO_H
