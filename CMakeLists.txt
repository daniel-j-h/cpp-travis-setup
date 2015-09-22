CMAKE_MINIMUM_REQUIRED(VERSION 3.0.2)

PROJECT(Example)

IF(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -pedantic -Wuninitialized -Wunreachable-code -Wstrict-overflow=3 -D_FORTIFY_SOURCE=2 -ffunction-sections -fdata-sections")
  SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-O1 -Wl,--hash-style=gnu -Wl,--sort-common -Wl,--gc-sections")
ELSEIF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -pedantic -Wuninitialized -Wunreachable-code -Wstrict-overflow=3 -D_FORTIFY_SOURCE=2")
ELSE()
  MESSAGE(FATAL_ERROR "Unsupported system")
ENDIF()

ADD_EXECUTABLE(Main Main.cc)
