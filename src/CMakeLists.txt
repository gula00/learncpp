include_directories(${CMAKE_CURRENT_SOURCE_DIR})
set(SRC_LIST 02_strings.cpp)
message(STATUS "This is the src")
message(STATUS "This is BINARY directory: ${HELLO_BINARY_DIR}")
message(STATUS "This is SOURCE directory: ${HELLO_SOURCE_DIR}")
add_executable(main ${SRC_LIST})

# Add plog header-only library include path
target_include_directories(main PRIVATE ${PROJECT_SOURCE_DIR}/third_party/include)
