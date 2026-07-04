cmake_minimum_required(VERSION 3.15)
project(unit_12 CXX)

# Executable binary target
add_executable(unit_12_bin main.cpp)

# Output matching target name
set_target_properties(unit_12_bin PROPERTIES OUTPUT_NAME "unit_12_bin")
