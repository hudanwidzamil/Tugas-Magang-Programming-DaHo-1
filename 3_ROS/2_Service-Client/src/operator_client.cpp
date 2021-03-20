# include <ros/ros.h>
# include "service_client/Operation.h"
# include <iostream>

/*
    polynomial counter

    how to run :
        1. rosrun service_client operator_client_node x coef1 coef2
           result = coef1 * x + coef2
        1. rosrun service_client operator_client_node x coef1 coef2 coef3
           result = coef1 * x^2 + coef2 * x + coef3
        
*/

int main(int argc, char** argv) {
    ros::init(argc, argv, "operator_client_node");

    if (argc < 3) {
        ROS_INFO("usage: rosrun service_client operator_client_node x coef1 coef2 ...");
        return 1;
    }

    int x = atol(argv[1]);
    int coef[argc - 2];

    for (int i = 2; i < argc; i++) {
        coef[i - 2] = atol(argv[i]);
    }

    ros::NodeHandle nh;

    ros::ServiceClient addClient = nh.serviceClient<service_client::Operation>("/tugas2/add_service");
    ros::ServiceClient multiplyClient = nh.serviceClient<service_client::Operation>("/tugas2/multiply_service");
    ros::ServiceClient powerClient = nh.serviceClient<service_client::Operation>("/tugas2/power_service");

    service_client::Operation srv;

    int sum = 0;
    for (int i = 0; i < argc - 2; i++) {
        int term;
        srv.request.a = x;
        srv.request.b = argc - 3 - i;
        if (powerClient.call(srv)) {
            term = srv.response.result;
        } else {
            return 1;
        }
        srv.request.a = coef[i];
        srv.request.b = term;
        if (multiplyClient.call(srv)) {
            term = srv.response.result;
        } else {
            return 1;
        }
        srv.request.a = sum;
        srv.request.b = term;
        if (addClient.call(srv)) {
            sum = srv.response.result;
        } else {
            return 1;
        }
    }

    std::cout << "Result : " << sum << std::endl;

    return 0;
}