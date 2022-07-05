#include "rclcpp/rclcpp.hpp"
#include "move_arm_interfaces/srv/move_arm.hpp"

#include <memory>

void add(const std::shared_ptr<move_arm_interfaces::srv::MoveArm::Request> request,
          std::shared_ptr<move_arm_interfaces::srv::MoveArm::Response>      response)
{
  response->success = true;

}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_two_ints_server");

  rclcpp::Service<move_arm_interfaces::srv::MoveArm>::SharedPtr service =
    node->create_service<move_arm_interfaces::srv::MoveArm>("add_two_ints", &add);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}