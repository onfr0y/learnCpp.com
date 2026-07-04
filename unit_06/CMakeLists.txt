cmake_minimum_required(VERSION 3.15)
project(unit_06 CXX)

# Executable binary target
add_executable(unit_06_bin main.cpp)

# Output matching target name
set_target_properties(unit_06_bin PROPERTIES OUTPUT_NAME "unit_06_bin")
