# The first line searches the Thread library and the coresponding binaries. 
find_package(Threads)

# Now you should add the correct lines so that both executable are build.
# Both executables use the Threads-libarry. Thi link to this library is stored in the 
#   variable CMAKE_THREAD_LIBS_INIT
# 1) multi
# ----add code here----
add_executable(multi multi.cpp)
target_link_libraries(multi ${CMAKE_THREAD_LIBS_INIT})

# 2) realTime
# ----add code here----
add_executable(realTime realTime.cpp)
target_link_libraries(realTime ${CMAKE_THREAD_LIBS_INIT})


# Finally the installation path is set!
install(TARGETS multi DESTINATION ${merleMax_SOURCE_DIR}/bin)
install(TARGETS realTime DESTINATION ${merleMax_SOURCE_DIR}/bin)
