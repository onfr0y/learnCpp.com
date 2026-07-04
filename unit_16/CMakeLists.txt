cmake_minimum_required(VERSION 3.15)
project(unit_16 CXX)

# Executable binary target
add_executable(unit_16_bin main.cpp)

# Output matching target name
set_target_properties(unit_16_bin PROPERTIES OUTPUT_NAME "unit_16_bin")
