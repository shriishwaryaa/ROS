#include <ros/ros.h>
#include <motion_decoder/image_converter.hpp>
#include <apriltags_ros/AprilTagDetectionArray.h>
#include <apriltags_ros/AprilTagDetection.h>
#include <tf/transform_broadcaster.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Transform.h>


ImageConverter* ic;

void apriltag_detection_callback(const apriltags_ros::AprilTagDetectionArray msg)
{
  ROS_INFO("In subscribe\n");
  //TODO: Parse message and publish transforms as apriltag_tf and camera
  static tf2_ros::TransformBroadcaster br;

  for (int i = 0; i < msg.detections.size(); i++) {
    apriltags_ros::AprilTagDetection detection = msg.detections[i];
    geometry_msgs::Point p = detection.pose.pose.position;
    geometry_msgs::Quaternion q = detection.pose.pose.orientation;

    geometry_msgs::TransformStamped transformStamped;
    transformStamped.header.stamp = ros::Time::now();
    transformStamped.header.frame_id = "camera";
    transformStamped.child_frame_id = "april_tf";
    transformStamped.transform.translation.x = p.x;
    transformStamped.transform.translation.y = p.y;
    transformStamped.transform.translation.z = p.z;
    transformStamped.transform.rotation = q;

    br.sendTransform(transformStamped);

    ic->setTagLocations(p.x, p.y, p.z);
  } 
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "image_converter");
  
  ros::NodeHandle n;
  //TODO: Add a subscriber to get the AprilTag detections The callback function skelton is given.
  ros::Subscriber sub = n.subscribe("tag_detections", 1000, apriltag_detection_callback);

  ImageConverter converter;
  ic = &converter;
  ros::Rate loop_rate(50);
  ROS_INFO("In main\n");
  while(ros::ok()) {
    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
