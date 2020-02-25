cmake_minimum_required(VERSION 3.5)

set(NAME sum_test)

include_directories(${CMAKE_SOURCE_DIR}/src/include)

file(GLOB SOURCES "*.cpp")

add_executable(${NAME} ${SOURCES})

target_link_libraries(${NAME} core)

add_test(all_tests ${NAME})
