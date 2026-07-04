cmake_minimum_required(VERSION 3.15)
project(unit_15 CXX)

# Executable binary target
add_executable(unit_15_bin main.cpp)

# Output matching target name
set_target_properties(unit_15_bin PROPERTIES OUTPUT_NAME "unit_15_bin")
