set(SOURCES
  test.cpp)

include_directories(${merleMax_INCLUDE_DIR})

find_package(GTest REQUIRED)

add_executable(runTests 
  ${SOURCES}
)
target_link_libraries(runTests FactorialLib)
target_link_libraries(runTests gtest gmock -pthread)

set(DESTINATION_FOLDER
  ${merleMax_SOURCE_DIR}/bin)

install(TARGETS runTests RUNTIME DESTINATION bin DESTINATION ${DESTINATION_FOLDER})
