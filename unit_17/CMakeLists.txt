cmake_minimum_required(VERSION 3.15)
project(unit_17 CXX)

# Executable binary target
add_executable(unit_17_bin main.cpp)

# Output matching target name
set_target_properties(unit_17_bin PROPERTIES OUTPUT_NAME "unit_17_bin")
