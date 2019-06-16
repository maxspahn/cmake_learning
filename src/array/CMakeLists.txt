# We set up a variable for all the source code.
set(SOURCES
  array.cpp)
# We set up the destination folder for both approaches.
set(DESTINATION_FOLDER
  ${merleMax_SOURCE_DIR}/bin)

add_executable(array ${SOURCES})

install(TARGETS array RUNTIME DESTINATION bin DESTINATION ${DESTINATION_FOLDER})

