cmake_minimum_required(VERSION 3.12)
project(HelloFFmpeg)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__STDC_CONSTANT_MACROS")

find_package(FFMPEG REQUIRED)
add_executable(hello-ffmpeg src/main.cpp)

target_include_directories(hello-ffmpeg PRIVATE ${FFMPEG_INCLUDE_DIRS})
target_link_directories(hello-ffmpeg PRIVATE ${FFMPEG_LIBRARY_DIRS})
target_link_libraries(hello-ffmpeg PRIVATE ${FFMPEG_LIBRARIES})

