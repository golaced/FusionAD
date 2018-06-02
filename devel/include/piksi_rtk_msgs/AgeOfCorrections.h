// Generated by gencpp from file piksi_rtk_msgs/AgeOfCorrections.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_AGEOFCORRECTIONS_H
#define PIKSI_RTK_MSGS_MESSAGE_AGEOFCORRECTIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace piksi_rtk_msgs
{
template <class ContainerAllocator>
struct AgeOfCorrections_
{
  typedef AgeOfCorrections_<ContainerAllocator> Type;

  AgeOfCorrections_()
    : header()
    , tow(0)
    , age(0)  {
    }
  AgeOfCorrections_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tow(0)
    , age(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _tow_type;
  _tow_type tow;

   typedef uint16_t _age_type;
  _age_type age;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> const> ConstPtr;

}; // struct AgeOfCorrections_

typedef ::piksi_rtk_msgs::AgeOfCorrections_<std::allocator<void> > AgeOfCorrections;

typedef boost::shared_ptr< ::piksi_rtk_msgs::AgeOfCorrections > AgeOfCorrectionsPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::AgeOfCorrections const> AgeOfCorrectionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'piksi_rtk_msgs': ['/home/mensonli/FusionAD/src/utility/ethz_piksi_ros/piksi_rtk_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94c5e09b6a4cc653e4fede2c22a046bf";
  }

  static const char* value(const ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94c5e09b6a4cc653ULL;
  static const uint64_t static_value2 = 0xe4fede2c22a046bfULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/AgeOfCorrections";
  }

  static const char* value(const ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Age of the corrections used for the current Differential solution.\n\
\n\
Header header\n\
\n\
uint32 tow      # GPS Time of Week [ms].\n\
uint16 age      # Age of the corrections (0xFFFF indicates invalid) [deciseconds].\n\
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
";
  }

  static const char* value(const ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tow);
      stream.next(m.age);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AgeOfCorrections_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::AgeOfCorrections_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tow: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tow);
    s << indent << "age: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.age);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_AGEOFCORRECTIONS_H
