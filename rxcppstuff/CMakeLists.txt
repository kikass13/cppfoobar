cmake_minimum_required(VERSION 3.0.0)
project(rxcppstuff VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")


include_directories(include)
### main1
set(SOURCE_FILES src/main1.cpp)
add_executable(${PROJECT_NAME}1.bin ${SOURCE_FILES})
set_target_properties( ${PROJECT_NAME}1.bin PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "../"
)
### main2
set(SOURCE_FILES src/main2.cpp)
add_executable(${PROJECT_NAME}2.bin ${SOURCE_FILES})
set_target_properties( ${PROJECT_NAME}2.bin PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "../"
)