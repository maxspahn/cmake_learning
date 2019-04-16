# The programm regex requires the boost library which has to 
#   be installed somewhere on the computer. The following line
#   finds the package and hence its binary folder and defines
#   some variables with the location, mainly the include 
#   directories and the binary.
find_package(Boost 1.40 COMPONENTS regex REQUIRED)
# The library was found and the header location stored at 
#   Boost_INCLUDE_DIRS. This may seem complicated but you
#   can find out what is in this directory.
# What kind of files to you expect?
# Try to find out the names of the files. 
# HINT: Use terminal outputs...the boost files may appear somehow
#   hidden in a very general folder...
include_directories(${Boost_INCLUDE_DIRS})

# The following lines should be easy to understand.
add_executable(regex regex.cpp)
target_link_libraries(regex ${Boost_LIBRARIES})
install(TARGETS regex RUNTIME DESTINATION bin DESTINATION ${merleMax_SOURCE_DIR}/build/bin)
