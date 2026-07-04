cmake_minimum_required(VERSION 3.15)
project(unit_01 CXX)

# Executable binary target
add_executable(unit_01_bin main.cpp)

# Output matching target name
set_target_properties(unit_01_bin PROPERTIES OUTPUT_NAME "unit_01_bin")
