# include <ros/ros.h>
# include <std_msgs/String.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "publisher_node");

    ros::NodeHandle nh;

    ros::Publisher pub = nh.advertise<std_msgs::String>("/tugas1", 1000);

    std_msgs::String msg;
    msg.data = "Hello world";
    ros::Rate rate(60);
    while (ros::ok()) {
        pub.publish(msg);
        rate.sleep();
    }

    return 0;
}