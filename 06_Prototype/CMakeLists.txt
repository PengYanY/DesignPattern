# remove last end of "/"
string(REGEX REPLACE "/$" "" CURRENT_FOLDER_ABSOLUTE ${CMAKE_CURRENT_SOURCE_DIR})

# get current relative dir name and set target name
string(REGEX REPLACE ".*/(.*)" "\\1" CURRENT_FOLDER ${CURRENT_FOLDER_ABSOLUTE})
set (TARGET ${CURRENT_FOLDER})

file(GLOB SOUCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

file(GLOB INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

add_executable(${TARGET} ${SOUCES} ${INCLUDES})

