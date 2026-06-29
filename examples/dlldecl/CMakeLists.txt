cmake_minimum_required(VERSION 3.20)

project(
    libtest
    VERSION 0.1
    LANGUAGES C CXX
)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
add_executable(${CMAKE_PROJECT_NAME} main.cpp)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message("Debugging build")
else()
    message("Release build")
endif()

target_link_libraries(
    libtest 
    PRIVATE
    hello
)
