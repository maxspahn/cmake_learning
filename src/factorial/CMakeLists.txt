add_library(FactorialLib factorial.cpp)
include_directories(FactorialLib ${merleMax_INCLUDE_DIR})
install(TARGETS FactorialLib DESTINATION ${merleMax_SOURCE_DIR}/lib)
