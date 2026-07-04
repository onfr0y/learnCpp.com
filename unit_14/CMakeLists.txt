cmake_minimum_required(VERSION 3.15)
project(unit_14 CXX)

# Executable binary target
add_executable(unit_14_bin main.cpp)

# Output matching target name
set_target_properties(unit_14_bin PROPERTIES OUTPUT_NAME "unit_14_bin")
