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

#include "corticx/RSCUtils.h"
#include "unitree/robot/go2/robot_state/robot_state_client.hpp"

using namespace unitree::common;
using namespace unitree::robot;
using namespace unitree::robot::go2;

int main(int argc, char const **argv)
{      
    std::string networkInterface, serviceToDeactivate;
    if (argc == 3) {
        networkInterface = argv[1];
        serviceToDeactivate = argv[2];
        std::cout << "Network interface: " << networkInterface << std::endl;
        std::cout << "Service to disable: " << serviceToDeactivate << std::endl;
    } else {
        std::cout << "Arguments: \n\t1. network interface\n\t2. service name" << std::endl;
        return 1;
    }
    std::cout << "Test" << std::endl;
    RSCUtils rscUtils;
    rscUtils.DeactivateService(networkInterface, serviceToDeactivate);
}