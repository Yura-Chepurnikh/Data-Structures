cmake_minimum_required(VERSION 3.15)

project(SingleLinkedList)

add_library(SingleLinkedList STATIC src/single_linked_list.cpp)

add_subdirectory(third-party/googletest)

add_executable(Tests Tests/tests.cpp)

target_link_libraries(Tests SingleLinkedList gtest gtest_main)

target_include_directories(SingleLinkedList PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)