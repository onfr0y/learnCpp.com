cmake_minimum_required(VERSION 3.15)
project(unit_07 CXX)

# Executable binary target
add_executable(unit_07_bin main.cpp)

# Output matching target name
set_target_properties(unit_07_bin PROPERTIES OUTPUT_NAME "unit_07_bin")
