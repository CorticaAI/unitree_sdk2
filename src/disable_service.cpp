// #pragma once

// #include <math.h>
// #include <iostream>
// #include <stdio.h>
// #include <stdint.h>
// #include <vector>
// #include <array>
// #include <chrono>
// #include <thread>
// #include <filesystem>
// #include <mutex>
// #include <fstream>
// #include <future>
// #include <algorithm>

// #include "unitree/idl/go2/LowState_.hpp"
// #include "unitree/idl/go2/LowCmd_.hpp"
// #include "unitree/common/thread/thread.hpp"

// #include "unitree/robot/channel/channel_publisher.hpp"
// #include "unitree/robot/channel/channel_subscriber.hpp"
// #include <unitree/common/time/time_tool.hpp>

// #include "borg/neuralController/XPController.h"

// #include "state_machine.hpp"
// #include "gamepad.hpp"
// #include "robot_interface.hpp"
// #include "unitree/robot/go2/robot_state/robot_state_client.hpp"

// using namespace unitree::common;
// using namespace unitree::robot;
// using namespace unitree::robot::go2;
// namespace fs = std::filesystem;

// #define TOPIC_LOWCMD "rt/lowcmd"
// #define TOPIC_LOWSTATE "rt/lowstate"

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
#include <algorithm>
#include <optional>
#include <chrono>
#include <iomanip>

#include "unitree/robot/go2/robot_state/robot_state_client.hpp"

using namespace unitree::common;
using namespace unitree::robot;
using namespace unitree::robot::go2;

int queryServiceStatus(const std::string& serviceName, RobotStateClient& rsc)
{
    std::vector<ServiceState> serviceStateList;
    int ret, serviceStatus;
    ret = rsc.ServiceList(serviceStateList);
    size_t i, count = serviceStateList.size();
    std::cout << "Num active services: " << count << std::endl;
    for (i = 0; i < count; i++)
    {
        const ServiceState& serviceState = serviceStateList[i];
        if(serviceState.name == serviceName)
        {
            if(serviceState.status == 0)
            {
                std::cout << "Service '" << serviceState.name <<"' is active now"<<std::endl;
                serviceStatus = 1;
            }
            else
            {
                std::cout << "Service '" << serviceState.name <<"' is inactive now"<<std::endl;
                serviceStatus = 0;
            } 
        }    
    }
    return serviceStatus;
    
}

int main(int argc, char const *argv[])
{   
    std::string networkInterface;
    std::string serviceToDeactivate;
    if (argc == 3) {
        networkInterface = argv[1];
        serviceToDeactivate = argv[2];
        std::cout << "Network interface: " << networkInterface << std::endl;
        std::cout << "Service to disable: " << serviceToDeactivate << std::endl;
    } else {
        std::cout << "Arguments: \n\t1. network interface\n\t2. service name" << std::endl;
        return 1;
    }
    ChannelFactory::Instance()->Init(0, networkInterface);
    std::cout<<"Try to deactivate service:" << serviceToDeactivate << std::endl;

    // Init robot state client (RSC)
    RobotStateClient rsc;
    rsc.SetTimeout(10.0f); 
    rsc.Init();

    while(queryServiceStatus(serviceToDeactivate, rsc))
    {
        std::cout<<"Try to deactivate service: "<< serviceToDeactivate <<std::endl;
        rsc.ServiceSwitch(serviceToDeactivate, 0);  
        sleep(1);
    }
    return 0;
}