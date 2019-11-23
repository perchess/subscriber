#include "ros/ros.h"
#include "std_msgs/Int32.h"

void receive (const std_msgs::Int32 &data){
  std::cout << "/subscriber: data:" << data.data << std::endl;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber"); // 3 arg is the namo of node
  ros::NodeHandle n; // subscribe or another
  ros::Subscriber sub = n.subscribe("/topic", 1000, receive);
  ros::spin();
  return 0;
}
