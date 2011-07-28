/* Auto-generated by genmsg_cpp for file /home/ncourbet/hri-scripts/share/navigation_actionlib/msg/NavigationGoal.msg */
#ifndef NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONGOAL_H
#define NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONGOAL_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace navigation_actionlib
{
template <class ContainerAllocator>
struct NavigationGoal_ : public ros::Message
{
  typedef NavigationGoal_<ContainerAllocator> Type;

  NavigationGoal_()
  : order(0)
  {
  }

  NavigationGoal_(const ContainerAllocator& _alloc)
  : order(0)
  {
  }

  typedef int32_t _order_type;
  int32_t order;


private:
  static const char* __s_getDataType_() { return "navigation_actionlib/NavigationGoal"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "6889063349a00b249bd1661df429d822"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
int32 order\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, order);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, order);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(order);
    return size;
  }

  typedef boost::shared_ptr< ::navigation_actionlib::NavigationGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation_actionlib::NavigationGoal_<ContainerAllocator>  const> ConstPtr;
}; // struct NavigationGoal
typedef  ::navigation_actionlib::NavigationGoal_<std::allocator<void> > NavigationGoal;

typedef boost::shared_ptr< ::navigation_actionlib::NavigationGoal> NavigationGoalPtr;
typedef boost::shared_ptr< ::navigation_actionlib::NavigationGoal const> NavigationGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::navigation_actionlib::NavigationGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::navigation_actionlib::NavigationGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace navigation_actionlib

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::navigation_actionlib::NavigationGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6889063349a00b249bd1661df429d822";
  }

  static const char* value(const  ::navigation_actionlib::NavigationGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6889063349a00b24ULL;
  static const uint64_t static_value2 = 0x9bd1661df429d822ULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation_actionlib::NavigationGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "navigation_actionlib/NavigationGoal";
  }

  static const char* value(const  ::navigation_actionlib::NavigationGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::navigation_actionlib::NavigationGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
int32 order\n\
\n\
";
  }

  static const char* value(const  ::navigation_actionlib::NavigationGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::navigation_actionlib::NavigationGoal_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::navigation_actionlib::NavigationGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.order);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NavigationGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation_actionlib::NavigationGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::navigation_actionlib::NavigationGoal_<ContainerAllocator> & v) 
  {
    s << indent << "order: ";
    Printer<int32_t>::stream(s, indent + "  ", v.order);
  }
};


} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONGOAL_H

