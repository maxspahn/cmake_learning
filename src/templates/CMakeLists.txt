#Adds library. The syntax is the same as for add_executable. 
#The library has the name : libPrinterLib.a and will be stored at
#   two different places (two seperate folders). 

#   Do you know which?
add_library(Robot robot.cpp)
include_directories(Robot ${merleMax_INCLUDE_DIR})
install(TARGETS Robot DESTINATION ${merleMax_SOURCE_DIR}/lib)
