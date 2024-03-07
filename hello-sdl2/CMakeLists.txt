cmake_minimum_required(VERSION 3.12)
project(HelloSDL2)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 CONFIG REQUIRED)

add_executable(hello-sdl2 src/main.cpp)

target_link_libraries(hello-sdl2
    PRIVATE
    $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)