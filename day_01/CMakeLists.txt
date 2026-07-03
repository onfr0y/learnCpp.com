cmake_minimum_required(VERSION 3.15)
project(day_01 CXX)

# Executable binary target
add_executable(day_01_bin main.cpp)

# Output matching target name
set_target_properties(day_01_bin PROPERTIES OUTPUT_NAME "day_01_bin")
