# include <ros/ros.h>
# include <std_msgs/String.h>

void callback(const std_msgs::String::ConstPtr& msg) {
    ROS_INFO("I got this message : %s", msg->data.c_str());
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "subscriber_node");

    ros::NodeHandle nh;

    ros::Subscriber subscriber = nh.subscribe<std_msgs::String>("/tugas1", 1000, callback);

    ros::spin();

    return 0;
}