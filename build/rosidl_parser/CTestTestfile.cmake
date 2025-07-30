# CMake generated Testfile for 
# Source directory: /workspace/towen/src/rosidl/rosidl_parser
# Build directory: /workspace/towen/build/rosidl_parser
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(pytest "/usr/local/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/workspace/towen/build/rosidl_parser/test_results/rosidl_parser/pytest.xunit.xml" "--package-name" "rosidl_parser" "--output-file" "/workspace/towen/build/rosidl_parser/ament_cmake_pytest/pytest.txt" "--command" "/usr/local/bin/python3" "-u" "-m" "pytest" "/workspace/towen/src/rosidl/rosidl_parser/test" "-o" "cache_dir=/workspace/towen/build/rosidl_parser/ament_cmake_pytest/pytest/.cache" "--junit-xml=/workspace/towen/build/rosidl_parser/test_results/rosidl_parser/pytest.xunit.xml" "--junit-prefix=rosidl_parser")
set_tests_properties(pytest PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/workspace/towen/build/rosidl_parser" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;169;ament_add_test;/workspace/towen/src/rosidl/rosidl_parser/CMakeLists.txt;19;ament_add_pytest_test;/workspace/towen/src/rosidl/rosidl_parser/CMakeLists.txt;0;")
