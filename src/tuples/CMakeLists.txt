# We set up a variable for all the source code.
set(SOURCES
  tuple.cpp)

include_directories(${merleMax_INCLUDE_DIR})

add_executable(tuple
  ${SOURCES}
  "${merleMax_INCLUDE_DIR}/myMax.h"
)

# We set up the destination folder for both approaches.
set(DESTINATION_FOLDER
  ${merleMax_SOURCE_DIR}/bin)

install(TARGETS tuple RUNTIME DESTINATION bin DESTINATION ${DESTINATION_FOLDER})
