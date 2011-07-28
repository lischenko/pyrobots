/* Auto-generated by genmsg_cpp for file /home/ncourbet/hri-scripts/share/navigation_actionlib/msg/NavigationActionFeedback.msg */
#ifndef NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONACTIONFEEDBACK_H
#define NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONACTIONFEEDBACK_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "navigation_actionlib/NavigationFeedback.h"

namespace navigation_actionlib
{
template <class ContainerAllocator>
struct NavigationActionFeedback_ : public ros::Message
{
  typedef NavigationActionFeedback_<ContainerAllocator> Type;

  NavigationActionFeedback_()
  : header()
  , status()
  , feedback()
  {
  }

  NavigationActionFeedback_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , status(_alloc)
  , feedback(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
   ::actionlib_msgs::GoalStatus_<ContainerAllocator>  status;

  typedef  ::navigation_actionlib::NavigationFeedback_<ContainerAllocator>  _feedback_type;
   ::navigation_actionlib::NavigationFeedback_<ContainerAllocator>  feedback;


private:
  static const char* __s_getDataType_() { return "navigation_actionlib/NavigationActionFeedback"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "73b8497a9f629a31c0020900e4148f07"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
NavigationFeedback feedback\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: navigation_actionlib/NavigationFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
int32[] sequence \n\
\n\
\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, header);
    ros::serialization::serialize(stream, status);
    ros::serialization::serialize(stream, feedback);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, header);
    ros::serialization::deserialize(stream, status);
    ros::serialization::deserialize(stream, feedback);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(header);
    size += ros::serialization::serializationLength(status);
    size += ros::serialization::serializationLength(feedback);
    return size;
  }

  typedef boost::shared_ptr< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator>  const> ConstPtr;
}; // struct NavigationActionFeedback
typedef  ::navigation_actionlib::NavigationActionFeedback_<std::allocator<void> > NavigationActionFeedback;

typedef boost::shared_ptr< ::navigation_actionlib::NavigationActionFeedback> NavigationActionFeedbackPtr;
typedef boost::shared_ptr< ::navigation_actionlib::NavigationActionFeedback const> NavigationActionFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace navigation_actionlib

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "73b8497a9f629a31c0020900e4148f07";
  }

  static const char* value(const  ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x73b8497a9f629a31ULL;
  static const uint64_t static_value2 = 0xc0020900e4148f07ULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "navigation_actionlib/NavigationActionFeedback";
  }

  static const char* value(const  ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
NavigationFeedback feedback\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: navigation_actionlib/NavigationFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
int32[] sequence \n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.status);
    stream.next(m.feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NavigationActionFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::navigation_actionlib::NavigationActionFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "feedback: ";
s << std::endl;
    Printer< ::navigation_actionlib::NavigationFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_ACTIONLIB_MESSAGE_NAVIGATIONACTIONFEEDBACK_H

