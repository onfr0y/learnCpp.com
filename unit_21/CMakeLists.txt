cmake_minimum_required(VERSION 3.15)
project(unit_21 CXX)

# Executable binary target
add_executable(unit_21_bin main.cpp)

# Output matching target name
set_target_properties(unit_21_bin PROPERTIES OUTPUT_NAME "unit_21_bin")
