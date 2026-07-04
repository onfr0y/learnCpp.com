cmake_minimum_required(VERSION 3.15)
project(unit_11 CXX)

# Executable binary target
add_executable(unit_11_bin main.cpp)

# Output matching target name
set_target_properties(unit_11_bin PROPERTIES OUTPUT_NAME "unit_11_bin")
