cmake_minimum_required(VERSION 3.15)
project(unit_28 CXX)

# Executable binary target
add_executable(unit_28_bin main.cpp)

# Output matching target name
set_target_properties(unit_28_bin PROPERTIES OUTPUT_NAME "unit_28_bin")
