#Adds library. The syntax is the same as for add_executable. 
#The library has the name : libPrinterLib.a and will be stored at
#   two different places (two seperate folders). 

#   Do you know which?
add_library(PrinterLib printer.cpp)
include_directories(PrinterLib ${merleMax_INCLUDE_DIR})
install(TARGETS PrinterLib DESTINATION ${merleMax_SOURCE_DIR}/lib)
