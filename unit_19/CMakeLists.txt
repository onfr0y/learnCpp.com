cmake_minimum_required(VERSION 3.15)
project(unit_19 CXX)

# Executable binary target
add_executable(unit_19_bin main.cpp)

# Output matching target name
set_target_properties(unit_19_bin PROPERTIES OUTPUT_NAME "unit_19_bin")
