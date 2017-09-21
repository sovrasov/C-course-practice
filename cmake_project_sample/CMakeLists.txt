cmake_minimum_required(VERSION 3.1)

set(PROJECT_NAME_STR project_example)
project (${PROJECT_NAME_STR})

enable_language(C)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h)

add_executable(${PROJECT_NAME_STR} ${SRC_FILES})

if(CMAKE_C_COMPILER_ID MATCHES "GNU")
  target_compile_options(${PROJECT_NAME_STR} PRIVATE -std=c89 -pedantic -Werror -Wall)
elseif (CMAKE_C_COMPILER_ID MATCHES "MSVC")
  add_definitions(/EHsc)
endif()
