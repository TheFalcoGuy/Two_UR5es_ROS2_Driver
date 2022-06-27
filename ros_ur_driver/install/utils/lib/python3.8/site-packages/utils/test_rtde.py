import rtde_receive

robot_ip = "192.168.0.88"
rtde_r = rtde_receive.RTDEReceiveInterface(robot_ip)
print (rtde_r.getActualCurrent())