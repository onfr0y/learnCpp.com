cmake_minimum_required(VERSION 3.15)
project(day_03 CXX)

# Executable binary target
add_executable(day_03_bin main.cpp)

# Output matching target name
set_target_properties(day_03_bin PROPERTIES OUTPUT_NAME "day_03_bin")
