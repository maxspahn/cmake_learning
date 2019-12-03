# Only some requirements for the version of cmake
cmake_minimum_required(VERSION 2.8)
# project name, not really important at this point
project(merleMax)

# This sets some requirements for the c++ version.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(merleMax_INCLUDE_DIR "${merleMax_SOURCE_DIR}/include")


# We want to see the power of cmake in action now.
# In the top layer there is the main CMakeLists.txt (which you
#    are looking at in this moment. There is not much to do, 
#    because all our source files are well organized in 
#    subdirectories. We need to add them to the project. 
#    The following lines do exactly this and they expect a 
#    CMakeLists.txt in each subdirectory. 
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(inp)
