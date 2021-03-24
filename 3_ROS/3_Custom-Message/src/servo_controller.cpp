// create a servo controller that subscribe servo displacement data
# include <ros/ros.h>
# include <custom_message/Servo.h>
# include <iostream>

using namespace std;

const int MID_YAW = 2048;
const int MID_PITCH = 2048;

const int MAX_YAW = 2300;
const int MIN_YAW = 1300;
const int MAX_PITCH = 3068;
const int MIN_PITCH = 1024;

void callback(const custom_message::Servo::ConstPtr& msg) {
    int currentYaw = MID_YAW + msg->yaw;

    if (currentYaw > MAX_YAW)
        currentYaw = MAX_YAW;
    else if (currentYaw < MIN_YAW)
        currentYaw = MIN_YAW;

    int currentPitch = MID_PITCH + msg->pitch;

    if (currentPitch > MAX_PITCH)
        currentPitch = MAX_PITCH;
    else if (currentPitch < MIN_PITCH)
        currentPitch = MIN_PITCH;

    cout << "Current Yaw : " << currentYaw << endl;
    cout << "Current Pitch : " << currentPitch << endl;
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "servo_controller_node");

    ros::NodeHandle nh;

    ros::Subscriber servoSub = nh.subscribe<custom_message::Servo>("/tugas3/servo_displacement", 1000, callback);

    ros::Rate rate(60);

    ros::spin();

    return 0;
}