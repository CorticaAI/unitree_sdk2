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

#include "corticx/RSCUtils.h"
#include "unitree/robot/go2/robot_state/robot_state_client.hpp"

using namespace unitree::common;
using namespace unitree::robot;
using namespace unitree::robot::go2;

class RSCUtils
{
    public:
        RSCUtils() : rsc() {}

        void DeactivateService(std::string& networkInterface, std::string& serviceToDeactivate) 
        {
            ChannelFactory::Instance()->Init(0, networkInterface);
            std::cout<<"Try to deactivate service: " << serviceToDeactivate << std::endl;

            // Init robot state client (RSC)
            std::cout << " 1 ";
            InitRobotStateClient();
            std::cout << " 2 "; 
            rsc.Init();
            std::cout << " 3 "; 
            while(QueryServiceStatus(serviceToDeactivate))
            {
                std::cout<<"Try to deactivate service: "<< serviceToDeactivate <<std::endl;
                SetServiceSwitch(serviceToDeactivate, 0);  
                sleep(1);
            }
            ChannelFactory::Instance()->Release();
        }

    private:
        void SetServiceSwitch(
            const std::string& serviceName,
            int value
            )
        {
            rsc.ServiceSwitch(serviceName, value);  
        } 

        void InitRobotStateClient()
        {
            rsc.SetTimeout(10.0f); 
            rsc.Init();
        }

        int QueryServiceStatus(const std::string& serviceName)
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
};