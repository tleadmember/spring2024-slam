# CMake generated Testfile for 
# Source directory: /home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/src/book_ros2/br2_bt_patrolling/tests
# Build directory: /home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/build/br2_bt_patrolling/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(bt_action_test "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/build/br2_bt_patrolling/test_results/br2_bt_patrolling/bt_action_test.gtest.xml" "--package-name" "br2_bt_patrolling" "--output-file" "/home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/build/br2_bt_patrolling/ament_cmake_gtest/bt_action_test.txt" "--command" "/home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/build/br2_bt_patrolling/tests/bt_action_test" "--gtest_output=xml:/home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/build/br2_bt_patrolling/test_results/br2_bt_patrolling/bt_action_test.gtest.xml")
set_tests_properties(bt_action_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/build/br2_bt_patrolling/tests/bt_action_test" TIMEOUT "60" WORKING_DIRECTORY "/home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/build/br2_bt_patrolling/tests" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/src/book_ros2/br2_bt_patrolling/tests/CMakeLists.txt;2;ament_add_gtest;/home/billhuynh/git/spring2024-slam/examples/ros2/bookros2_ws/src/book_ros2/br2_bt_patrolling/tests/CMakeLists.txt;0;")
subdirs("../gtest")
