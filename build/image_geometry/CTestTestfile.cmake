# CMake generated Testfile for 
# Source directory: /workspace/towen/src/vision_opencv/image_geometry
# Build directory: /workspace/towen/build/image_geometry
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(image_geometry-utest "/usr/local/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/workspace/towen/build/image_geometry/test_results/image_geometry/image_geometry-utest.gtest.xml" "--package-name" "image_geometry" "--output-file" "/workspace/towen/build/image_geometry/ament_cmake_gtest/image_geometry-utest.txt" "--command" "/workspace/towen/build/image_geometry/image_geometry-utest" "--gtest_output=xml:/workspace/towen/build/image_geometry/test_results/image_geometry/image_geometry-utest.gtest.xml")
set_tests_properties(image_geometry-utest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/workspace/towen/build/image_geometry/image_geometry-utest" TIMEOUT "60" WORKING_DIRECTORY "/workspace/towen/build/image_geometry" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/workspace/towen/src/vision_opencv/image_geometry/CMakeLists.txt;49;ament_add_gtest;/workspace/towen/src/vision_opencv/image_geometry/CMakeLists.txt;0;")
subdirs("gtest")
