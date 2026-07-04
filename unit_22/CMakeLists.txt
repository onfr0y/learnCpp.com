cmake_minimum_required(VERSION 3.15)
project(unit_22 CXX)

# Executable binary target
add_executable(unit_22_bin main.cpp)

# Output matching target name
set_target_properties(unit_22_bin PROPERTIES OUTPUT_NAME "unit_22_bin")
