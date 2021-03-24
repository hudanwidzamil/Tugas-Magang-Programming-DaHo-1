// create an object detector that publish x and y position of an object
# include <ros/ros.h>
# include <custom_message/Position.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "object_detector_node");

    ros::NodeHandle nh;

    ros::Publisher positionPub = nh.advertise<custom_message::Position>("/tugas3/object_position", 1000);

    ros::Rate rate(60);

    ros::Time currentTime = ros::Time::now();

    custom_message::Position msg;
    msg.x = 0;
    msg.y = 0;

    int duration = 5;
    int sign = 1;
    bool firstCheck = true;

    while(ros::ok()) {
        if (ros::Time::now() - currentTime > ros::Duration(duration)) {
            sign *= -1;
            currentTime = ros::Time::now();
            if (firstCheck) {
                firstCheck = true;
                duration = 10;
            }
        }
        msg.x += sign*5;
        msg.y += sign*5;
        positionPub.publish(msg);
        rate.sleep();
    }

    return 0;
}