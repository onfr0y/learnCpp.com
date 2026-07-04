cmake_minimum_required(VERSION 3.15)
project(unit_25 CXX)

# Executable binary target
add_executable(unit_25_bin main.cpp)

# Output matching target name
set_target_properties(unit_25_bin PROPERTIES OUTPUT_NAME "unit_25_bin")
