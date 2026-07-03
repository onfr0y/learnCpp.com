cmake_minimum_required(VERSION 3.15)
project(LearnCpp_Curriculum CXX)

# Configure modern C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable compiler warnings
if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

message(STATUS "--------------------------------------------------------")
message(STATUS "Configuring LearnCpp.com Daily Curriculum Project")
message(STATUS "C++ Standard: C++${CMAKE_CXX_STANDARD}")
message(STATUS "--------------------------------------------------------")

# Auto-detect all subdirectories matching day_* that have a CMakeLists.txt
file(GLOB DAY_DIRS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} day_*)

foreach(dir ${DAY_DIRS})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${dir} AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${dir}/CMakeLists.txt)
        message(STATUS "Adding daily subproject: ${dir}")
        add_subdirectory(${dir})
    endif()
endforeach()

message(STATUS "--------------------------------------------------------")
