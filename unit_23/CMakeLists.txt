cmake_minimum_required(VERSION 3.15)
project(unit_23 CXX)

# Executable binary target
add_executable(unit_23_bin main.cpp)

# Output matching target name
set_target_properties(unit_23_bin PROPERTIES OUTPUT_NAME "unit_23_bin")
