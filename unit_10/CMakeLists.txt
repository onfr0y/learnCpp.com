cmake_minimum_required(VERSION 3.15)
project(unit_10 CXX)

# Executable binary target
add_executable(unit_10_bin main.cpp)

# Output matching target name
set_target_properties(unit_10_bin PROPERTIES OUTPUT_NAME "unit_10_bin")
