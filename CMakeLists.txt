cmake_minimum_required(VERSION 3.5)

project(HELLO CXX)

add_subdirectory(src bin)

# [make install]
# install(PROGRAMS runhello.sh DESTINATION bin)
# install(DIRECTORY doc/ DESTINATION share/doc/make)
