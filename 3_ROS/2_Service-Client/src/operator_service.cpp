# include <ros/ros.h>
# include "service_client/Operation.h"
# include <cmath>

/*
    ROS operator service
*/

bool add(service_client::Operation::Request& req,
         service_client::Operation::Response& res) 
{
    res.result = req.a + req.b;
    return true;
}

bool multiply(service_client::Operation::Request& req,
              service_client::Operation::Response& res) 
{
    res.result = req.a * req.b;
    return true;
}

bool power(service_client::Operation::Request& req,
           service_client::Operation::Response& res) 
{
    res.result = pow(req.a, req.b);
    return true;
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "operator_service_node");

    ros::NodeHandle nh;

    ros::ServiceServer addService = nh.advertiseService("/tugas2/add_service", add);
    ros::ServiceServer multiplyService = nh.advertiseService("/tugas2/multiply_service", multiply);
    ros::ServiceServer powerService = nh.advertiseService("/tugas2/power_service", power);

    ros::spin();

    return 0;
}