#include "rclcpp/rclcpp.hpp"
#include "move_arm_interfaces/srv/move_arm.hpp"
#include "move_arm_interfaces/srv/move_arm.hpp"
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <chrono>
#include <memory>


class MoveArmServer : public rclcpp::Node
{
    public:
    MoveArmServer() : Node("move_arm_server")
    {
    
    rclcpp::NodeOptions node_options;
    node_options.automatically_declare_parameters_from_overrides(true);
    auto move_group_node = rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Before executing");

    
    
    
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Before move group interface");
    std::string PLANNING_GROUP = "ur_manipulator";
    // auto move_group = std::make_unique<moveit::planning_interface::MoveGroupInterface>(move_group_node, PLANNING_GROUP);
    
        

    moveit::planning_interface::MoveGroupInterface move_group(move_group_node, PLANNING_GROUP);
    // RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "After executing");
    // move_group.setGoalTolerance(0.05);
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "After goal tolerance executing");
    }

    
};


void add(const std::shared_ptr<move_arm_interfaces::srv::MoveArm::Request> request,
          std::shared_ptr<move_arm_interfaces::srv::MoveArm::Response>      response)
{
  response->success = true;

}

void writeToCsv(moveit_msgs::msg::RobotTrajectory trajectory){

}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::executors::MultiThreadedExecutor executor;
    

  std::shared_ptr<rclcpp::Node> node = std::make_shared<MoveArmServer>();
  executor.add_node(node);
  executor.add_node(node->move_group)

  rclcpp::Service<move_arm_interfaces::srv::MoveArm>::SharedPtr service =
    node->create_service<move_arm_interfaces::srv::MoveArm>("add_two_ints", &add);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints.");

  executor.spin();
  rclcpp::shutdown();
}