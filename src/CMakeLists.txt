cmake_minimum_required(VERSION 3.5)

set(NAME core)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB HEADERS ${INCLUDE_DIR}/*.h)

add_library(${NAME} ${SOURCES} ${HEADERS})

target_include_directories(${NAME} PUBLIC ${INCLUDE_DIR})
