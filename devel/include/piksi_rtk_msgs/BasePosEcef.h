// Generated by gencpp from file piksi_rtk_msgs/BasePosEcef.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_BASEPOSECEF_H
#define PIKSI_RTK_MSGS_MESSAGE_BASEPOSECEF_H


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
struct BasePosEcef_
{
  typedef BasePosEcef_<ContainerAllocator> Type;

  BasePosEcef_()
    : header()
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  BasePosEcef_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> const> ConstPtr;

}; // struct BasePosEcef_

typedef ::piksi_rtk_msgs::BasePosEcef_<std::allocator<void> > BasePosEcef;

typedef boost::shared_ptr< ::piksi_rtk_msgs::BasePosEcef > BasePosEcefPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::BasePosEcef const> BasePosEcefConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5defbd163657b4f6f639ba6d5676cc01";
  }

  static const char* value(const ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5defbd163657b4f6ULL;
  static const uint64_t static_value2 = 0xf639ba6d5676cc01ULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/BasePosEcef";
  }

  static const char* value(const ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The base station position message is the position reported by the base station itself in absolute Earth\n\
# Centered Earth Fixed coordinates. It is used for pseudo-absolute RTK positioning, and is required to\n\
# be a high-accuracy surveyed location of the base station. Any error here will result in an error in the\n\
# pseudo-absolute position output.\n\
\n\
Header header\n\
\n\
float64 x             # ECEF X coodinate [m].\n\
float64 y             # ECEF Y coodinate [m].\n\
float64 z             # ECEF Z coodinate [m].\n\
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

  static const char* value(const ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BasePosEcef_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::BasePosEcef_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_BASEPOSECEF_H
