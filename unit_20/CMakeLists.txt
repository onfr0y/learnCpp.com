cmake_minimum_required(VERSION 3.15)
project(unit_20 CXX)

# Executable binary target
add_executable(unit_20_bin main.cpp)

# Output matching target name
set_target_properties(unit_20_bin PROPERTIES OUTPUT_NAME "unit_20_bin")
