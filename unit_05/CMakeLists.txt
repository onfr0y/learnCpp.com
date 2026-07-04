cmake_minimum_required(VERSION 3.15)
project(unit_05 CXX)

# Executable binary target
add_executable(unit_05_bin main.cpp)

# Output matching target name
set_target_properties(unit_05_bin PROPERTIES OUTPUT_NAME "unit_05_bin")
