cmake_minimum_required(VERSION 3.15)
project(day_02 CXX)

# Executable binary target
add_executable(day_02_bin main.cpp)

# Output matching target name
set_target_properties(day_02_bin PROPERTIES OUTPUT_NAME "day_02_bin")
