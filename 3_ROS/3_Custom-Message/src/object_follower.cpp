// create an object follower that subscribe data from object detector and publish servo displacement data
# include <ros/ros.h>
# include <custom_message/Servo.h>
# include <custom_message/Position.h>

int yawDisplacement = 0;
int pitchDisplacement = 0;

const double VIEW_V_ANGLE = 43.3;  //degree = 0.8028 rad
const double VIEW_H_ANGLE = 70.42;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

void callback(const custom_message::Position::ConstPtr& msg) {
    yawDisplacement = -1*VIEW_H_ANGLE*(msg->x / SCREEN_WIDTH) / 0.088;
    pitchDisplacement = -1*VIEW_V_ANGLE*(msg->y / SCREEN_HEIGHT) / 0.088;
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "object_follower_node");

    ros::NodeHandle nh;

    ros::Publisher servoPub = nh.advertise<custom_message::Servo>("/tugas3/servo_displacement", 1000);

    ros::Subscriber positionSub = nh.subscribe<custom_message::Position>("/tugas3/object_position", 1000, callback);

    ros::Rate rate(60);

    custom_message::Servo msg;

    while(ros::ok()) {
        msg.yaw = yawDisplacement;
        msg.pitch = pitchDisplacement;

        servoPub.publish(msg);

        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}