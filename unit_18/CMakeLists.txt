cmake_minimum_required(VERSION 3.15)
project(unit_18 CXX)

# Executable binary target
add_executable(unit_18_bin main.cpp)

# Output matching target name
set_target_properties(unit_18_bin PROPERTIES OUTPUT_NAME "unit_18_bin")
