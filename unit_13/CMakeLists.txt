cmake_minimum_required(VERSION 3.15)
project(unit_13 CXX)

# Executable binary target
add_executable(unit_13_bin main.cpp)

# Output matching target name
set_target_properties(unit_13_bin PROPERTIES OUTPUT_NAME "unit_13_bin")
