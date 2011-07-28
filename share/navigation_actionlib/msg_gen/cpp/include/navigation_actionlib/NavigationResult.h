/* Auto-generated by genmsg_cpp for file /home/ncourbet/hri-scripts/share/navigation_actionlib/msg/NavigationResult.msg */
#ifndef NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONRESULT_H
#define NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONRESULT_H
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
struct NavigationResult_ : public ros::Message
{
  typedef NavigationResult_<ContainerAllocator> Type;

  NavigationResult_()
  : sequence()
  {
  }

  NavigationResult_(const ContainerAllocator& _alloc)
  : sequence(_alloc)
  {
  }

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _sequence_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  sequence;


  ROS_DEPRECATED uint32_t get_sequence_size() const { return (uint32_t)sequence.size(); }
  ROS_DEPRECATED void set_sequence_size(uint32_t size) { sequence.resize((size_t)size); }
  ROS_DEPRECATED void get_sequence_vec(std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other > & vec) const { vec = this->sequence; }
  ROS_DEPRECATED void set_sequence_vec(const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other > & vec) { this->sequence = vec; }
private:
  static const char* __s_getDataType_() { return "navigation_actionlib/NavigationResult"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "b81e37d2a31925a0e8ae261a8699cb79"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
int32[] sequence\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, sequence);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, sequence);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(sequence);
    return size;
  }

  typedef boost::shared_ptr< ::navigation_actionlib::NavigationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation_actionlib::NavigationResult_<ContainerAllocator>  const> ConstPtr;
}; // struct NavigationResult
typedef  ::navigation_actionlib::NavigationResult_<std::allocator<void> > NavigationResult;

typedef boost::shared_ptr< ::navigation_actionlib::NavigationResult> NavigationResultPtr;
typedef boost::shared_ptr< ::navigation_actionlib::NavigationResult const> NavigationResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::navigation_actionlib::NavigationResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::navigation_actionlib::NavigationResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace navigation_actionlib

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::navigation_actionlib::NavigationResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b81e37d2a31925a0e8ae261a8699cb79";
  }

  static const char* value(const  ::navigation_actionlib::NavigationResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb81e37d2a31925a0ULL;
  static const uint64_t static_value2 = 0xe8ae261a8699cb79ULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation_actionlib::NavigationResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "navigation_actionlib/NavigationResult";
  }

  static const char* value(const  ::navigation_actionlib::NavigationResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::navigation_actionlib::NavigationResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
int32[] sequence\n\
\n\
";
  }

  static const char* value(const  ::navigation_actionlib::NavigationResult_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::navigation_actionlib::NavigationResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.sequence);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NavigationResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation_actionlib::NavigationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::navigation_actionlib::NavigationResult_<ContainerAllocator> & v) 
  {
    s << indent << "sequence[]" << std::endl;
    for (size_t i = 0; i < v.sequence.size(); ++i)
    {
      s << indent << "  sequence[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.sequence[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONRESULT_H

