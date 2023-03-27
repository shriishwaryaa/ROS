#include <ros/ros.h>
#include <chatbot_node/reply_msg.h>
#include <message_ui/sent_msg.h>
#include <string>

using namespace std;

//Add your code here

string reply = "";

void chatbotCallback(const message_ui::sent_msg::ConstPtr& msg)
{
  string message = msg->message;

  if (message.compare("Hello") == 0)
  {
    ros::NodeHandle node;
    string name;
    if (!node.getParam("name", name))
    {
      name = "Ishwaryaa";
    }

    reply = "Hello, " + name;
  }
  else if (message.compare("What is your name?") == 0)
  {
    reply = "My name is MRSD Siri";
  }
  else if (message.compare("How are you?") == 0)
  {
    reply = "I am fine, thank you!";
  }
  else 
  {
    reply = "I do not understand";
  }
}

int main(int argc, char **argv) {

  ros::init(argc, argv, "chatbot_node");
  ros::NodeHandle n;

  //Add your code here
  ros::Publisher chatbot_pub = n.advertise<chatbot_node::reply_msg>("reply_msg", 1000);
  ros::Subscriber chatbot_sub = n.subscribe("sent_msg", 1000, chatbotCallback);

  ros::Rate loop_rate(20);

  while(ros::ok()) {

    chatbot_node::reply_msg msg;
    msg.message = reply;

    chatbot_pub.publish(msg);

    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}