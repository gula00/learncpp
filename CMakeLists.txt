cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)

project(HELLO CXX)

add_subdirectory(src bin)

# [make install]
# install(PROGRAMS runhello.sh DESTINATION bin)
# install(DIRECTORY doc/ DESTINATION share/doc/make)
