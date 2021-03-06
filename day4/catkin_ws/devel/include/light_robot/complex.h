// Generated by gencpp from file light_robot/complex.msg
// DO NOT EDIT!


#ifndef LIGHT_ROBOT_MESSAGE_COMPLEX_H
#define LIGHT_ROBOT_MESSAGE_COMPLEX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace light_robot
{
template <class ContainerAllocator>
struct complex_
{
  typedef complex_<ContainerAllocator> Type;

  complex_()
    : real(0.0)
    , img(0.0)  {
    }
  complex_(const ContainerAllocator& _alloc)
    : real(0.0)
    , img(0.0)  {
  (void)_alloc;
    }



   typedef float _real_type;
  _real_type real;

   typedef float _img_type;
  _img_type img;





  typedef boost::shared_ptr< ::light_robot::complex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::light_robot::complex_<ContainerAllocator> const> ConstPtr;

}; // struct complex_

typedef ::light_robot::complex_<std::allocator<void> > complex;

typedef boost::shared_ptr< ::light_robot::complex > complexPtr;
typedef boost::shared_ptr< ::light_robot::complex const> complexConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::light_robot::complex_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::light_robot::complex_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace light_robot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'light_robot': ['/home/korayem/AucRobotics/day4/catkin_ws/src/light_robot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::light_robot::complex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::light_robot::complex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::light_robot::complex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::light_robot::complex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::light_robot::complex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::light_robot::complex_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::light_robot::complex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa9255e8ba84f4d99fadfba39753a52b";
  }

  static const char* value(const ::light_robot::complex_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa9255e8ba84f4d9ULL;
  static const uint64_t static_value2 = 0x9fadfba39753a52bULL;
};

template<class ContainerAllocator>
struct DataType< ::light_robot::complex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "light_robot/complex";
  }

  static const char* value(const ::light_robot::complex_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::light_robot::complex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 real\n\
float32 img\n\
";
  }

  static const char* value(const ::light_robot::complex_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::light_robot::complex_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.real);
      stream.next(m.img);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct complex_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::light_robot::complex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::light_robot::complex_<ContainerAllocator>& v)
  {
    s << indent << "real: ";
    Printer<float>::stream(s, indent + "  ", v.real);
    s << indent << "img: ";
    Printer<float>::stream(s, indent + "  ", v.img);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LIGHT_ROBOT_MESSAGE_COMPLEX_H
