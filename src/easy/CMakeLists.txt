set(SOURCES
  easy.cpp)
# The class printer is in the file printer.h/.cpp in the folder 
#   classes so we need to include this directory.
set(INCLUDE_DIR
  "${merleMax_SOURCE_DIR}/src/classes")
include_directories (${INCLUDE_DIR})
# There are two different approaches to include the printer class.
# 1) Add the files directly to the executable. The files are
#    compiled directly with the main.
#    This does not require any CMakeLists.txt in classes!
add_executable(merle
  ${SOURCES}
  "${INCLUDE_DIR}/printer.cpp"
  "${INCLUDE_DIR}/printer.h"
)
# 2) We can also link the precompiled library ( like a .dll) to
#    our executable. This requires the compilation of a library
#    and hence the CMakeLists.txt in the folder classes.
#    Go and see what is happening and what means PrinterLib?
add_executable(merlelib ${SOURCES})
target_link_libraries(merlelib PrinterLib)


set(DESTINATION_FOLDER
  ${merleMax_SOURCE_DIR}/build/bin)

install(TARGETS merle RUNTIME DESTINATION bin DESTINATION ${DESTINATION_FOLDER})
install(TARGETS merlelib RUNTIME DESTINATION bin DESTINATION ${DESTINATION_FOLDER})

# This is another possibility to build an executable but without creating it in the build folder
#install(FILES ${SOURCES}
#  DESTINATION ${DESTINATION_FOLDER})
