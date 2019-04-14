# What happens in this CMakeLists.txt?
# Explain it to me!
find_package(Threads)
add_executable(multi multi.cpp)
target_link_libraries(multi ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS multi DESTINATION ${merleMax_SOURCE_DIR}/build/bin)
add_executable(realTime realTime.cpp)
target_link_libraries(realTime ${CMAKE_THREAD_LIBS_INIT})
install(TARGETS realTime DESTINATION ${merleMax_SOURCE_DIR}/build/bin)
