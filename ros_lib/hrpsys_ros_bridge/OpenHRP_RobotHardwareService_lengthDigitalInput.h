#ifndef _ROS_SERVICE_OpenHRP_RobotHardwareService_lengthDigitalInput_h
#define _ROS_SERVICE_OpenHRP_RobotHardwareService_lengthDigitalInput_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hrpsys_ros_bridge
{

static const char OPENHRP_ROBOTHARDWARESERVICE_LENGTHDIGITALINPUT[] = "hrpsys_ros_bridge/OpenHRP_RobotHardwareService_lengthDigitalInput";

  class OpenHRP_RobotHardwareService_lengthDigitalInputRequest : public ros::Msg
  {
    public:

    OpenHRP_RobotHardwareService_lengthDigitalInputRequest()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return OPENHRP_ROBOTHARDWARESERVICE_LENGTHDIGITALINPUT; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class OpenHRP_RobotHardwareService_lengthDigitalInputResponse : public ros::Msg
  {
    public:
      int32_t operation_return;

    OpenHRP_RobotHardwareService_lengthDigitalInputResponse():
      operation_return(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_operation_return;
      u_operation_return.real = this->operation_return;
      *(outbuffer + offset + 0) = (u_operation_return.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_operation_return.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_operation_return.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_operation_return.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->operation_return);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_operation_return;
      u_operation_return.base = 0;
      u_operation_return.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_operation_return.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_operation_return.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_operation_return.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->operation_return = u_operation_return.real;
      offset += sizeof(this->operation_return);
     return offset;
    }

    const char * getType(){ return OPENHRP_ROBOTHARDWARESERVICE_LENGTHDIGITALINPUT; };
    const char * getMD5(){ return "cd97f1a024148659f2b06bdfc6bda7d9"; };

  };

  class OpenHRP_RobotHardwareService_lengthDigitalInput {
    public:
    typedef OpenHRP_RobotHardwareService_lengthDigitalInputRequest Request;
    typedef OpenHRP_RobotHardwareService_lengthDigitalInputResponse Response;
  };

}
#endif
