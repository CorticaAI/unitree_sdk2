// DeactivateServiceManager.h
#ifndef DEACTIVATE_SERVICE_MANAGER_H
#define DEACTIVATE_SERVICE_MANAGER_H

#include <string>
#include <vector>
#include "unitree/robot/go2/robot_state/robot_state_client.hpp"

// Ensure the necessary namespaces or forward declarations are present
using namespace unitree::common;
using namespace unitree::robot;
using namespace unitree::robot::go2;

class RSCUtils
{
public:
    RSCUtils();
    void DeactivateService(std::string& networkInterface, std::string& serviceToDeactivate);

private:
    RobotStateClient rsc;
    void SetServiceSwitch(const std::string& serviceName, int value);
    void InitRobotStateClient();
    int QueryServiceStatus(const std::string& serviceName);
};

#endif // DEACTIVATE_SERVICE_MANAGER_H
