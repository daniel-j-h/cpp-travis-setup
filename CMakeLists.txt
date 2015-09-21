cmake_minimum_required(VERSION 3.0.2)

project(Example)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} \
-std=c++11 -Wall -Wextra -pedantic \
-Wuninitialized -Wunreachable-code -Wstrict-overflow=3 -D_FORTIFY_SOURCE=2 \
-ffunction-sections -fdata-sections")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} \
-Wl,-O1 -Wl,--hash-style=gnu -Wl,--sort-common \
-Wl,--gc-sections")

message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")
message(STATUS "CXX Flags: ${CMAKE_CXX_FLAGS}")
message(STATUS "LD Flags: ${CMAKE_EXE_LINKER_FLAGS}")
message(STATUS "Compiler: ${CMAKE_CXX_COMPILER}")
message(STATUS "Linker: ${CMAKE_LINKER}")

add_executable(Main Main.cc)
