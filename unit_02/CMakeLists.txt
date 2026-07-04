cmake_minimum_required(VERSION 3.15)
project(unit_02 CXX)

# Executable binary target
add_executable(unit_02_bin main.cpp)

# Output matching target name
set_target_properties(unit_02_bin PROPERTIES OUTPUT_NAME "unit_02_bin")
