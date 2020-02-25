cmake_minimum_required(VERSION 3.5)

set(NAME sum_test)

include_directories(${CMAKE_SOURCE_DIR}/src/include)
include_directories(${PROJECT_SOURCE_DIR}/3rdparty/Catch2/single_include/catch2)

file(GLOB SOURCES "*.cpp")

add_executable(${NAME} ${SOURCES})

target_link_libraries(${NAME} core)

add_test(all_tests ${NAME})
