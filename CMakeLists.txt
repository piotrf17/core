cmake_minimum_required(VERSION 2.6)
project(CORE)

# All header files are specified relative to base dir.
include_directories(${PROJECT_SOURCE_DIR})

# Set some basic build flags.
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -g -Wall -Werror -std=c++0x")

############################################################
# Configure required libraries

# No libraries needed yet!

############################################################
# Build targets

add_subdirectory(graphics)