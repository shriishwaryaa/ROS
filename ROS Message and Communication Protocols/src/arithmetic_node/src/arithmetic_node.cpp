#include <ros/ros.h>
#include <arithmetic_node/arithmetic_reply.h>
#include <message_ui/sent_msg.h>
#include <string>
#include <std_msgs/Header.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float64.h>

using namespace std;

//Add your code here

std_msgs::Header header;
string oper_type;
_Float32 answer;
_Float64 time_received;
_Float64 time_answered;
_Float64 process_time; 

void arithmeticCallback(const message_ui::sent_msg::ConstPtr& msg)
{
  string message = msg->message;
  time_received = msg->header.stamp.toSec();

  if (message.find("+") != string::npos)
  {
    oper_type = "Add";
    int loc = message.find("+");
    float a = stof(message.substr(0, loc));
    float b = stof(message.substr(loc + 1, message.length() - (loc + 1)));
    answer = a + b;
  }
  else if (message.find("-") != string::npos)
  {
    oper_type = "Subtract";
    int loc = message.find("-");
    float a = stof(message.substr(0, loc));
    float b = stof(message.substr(loc + 1, message.length() - (loc + 1)));
    answer = a - b;
  }
  else if (message.find("*") != string::npos)
  {
    oper_type = "Multiply";
    int loc = message.find("*");
    float a = stof(message.substr(0, loc));
    float b = stof(message.substr(loc + 1, message.length() - (loc + 1)));
    answer = a * b;
  }
  else if (message.find("/") != string::npos)
  {
    oper_type = "Divide";
    int loc = message.find("/");
    float a = stof(message.substr(0, loc));
    float b = stof(message.substr(loc + 1, message.length() - (loc + 1)));
    answer = a / b;
  }
  else
  {

  }
}

int main(int argc, char **argv) {

  ros::init(argc, argv, "chatbot_node");
  ros::NodeHandle n;

  //Add your code here
  ros::Publisher arithmetic_pub = n.advertise<arithmetic_node::arithmetic_reply>("arithmetic_reply", 1000);
  ros::Subscriber arithmetic_sub = n.subscribe("sent_msg", 1000, arithmeticCallback);

  ros::Rate loop_rate(20);

  while(ros::ok()) {

    time_answered = ros::Time::now().toSec();
    process_time = time_answered - time_received;

    arithmetic_node::arithmetic_reply msg;
    msg.answer = answer;
    msg.oper_type = oper_type;
    msg.header.stamp = ros::Time::now();
    msg.time_answered = time_answered;
    msg.time_received = time_received;
    msg.process_time = process_time;

    arithmetic_pub.publish(msg);

    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}