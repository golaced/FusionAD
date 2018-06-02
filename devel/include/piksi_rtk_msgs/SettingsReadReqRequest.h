// Generated by gencpp from file piksi_rtk_msgs/SettingsReadReqRequest.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_SETTINGSREADREQREQUEST_H
#define PIKSI_RTK_MSGS_MESSAGE_SETTINGSREADREQREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace piksi_rtk_msgs
{
template <class ContainerAllocator>
struct SettingsReadReqRequest_
{
  typedef SettingsReadReqRequest_<ContainerAllocator> Type;

  SettingsReadReqRequest_()
    : section_setting()
    , setting()  {
    }
  SettingsReadReqRequest_(const ContainerAllocator& _alloc)
    : section_setting(_alloc)
    , setting(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _section_setting_type;
  _section_setting_type section_setting;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _setting_type;
  _setting_type setting;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SettingsReadReqRequest_

typedef ::piksi_rtk_msgs::SettingsReadReqRequest_<std::allocator<void> > SettingsReadReqRequest;

typedef boost::shared_ptr< ::piksi_rtk_msgs::SettingsReadReqRequest > SettingsReadReqRequestPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::SettingsReadReqRequest const> SettingsReadReqRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'piksi_rtk_msgs': ['/home/mensonli/FusionAD/src/utility/ethz_piksi_ros/piksi_rtk_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e0ca67b77ad0356e13015bb542e7b59";
  }

  static const char* value(const ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e0ca67b77ad0356ULL;
  static const uint64_t static_value2 = 0xe13015bb542e7b59ULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/SettingsReadReqRequest";
  }

  static const char* value(const ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
string section_setting\n\
string setting\n\
";
  }

  static const char* value(const ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.section_setting);
      stream.next(m.setting);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SettingsReadReqRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::SettingsReadReqRequest_<ContainerAllocator>& v)
  {
    s << indent << "section_setting: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.section_setting);
    s << indent << "setting: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.setting);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_SETTINGSREADREQREQUEST_H
