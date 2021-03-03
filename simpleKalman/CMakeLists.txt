cmake_minimum_required(VERSION 3.0.0)
project(simpleKalman VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")


include_directories(include)
### main1
set(SOURCE_FILES 
    main.cpp
    src/SimpleKalmanFilter.cpp
)
add_executable(${PROJECT_NAME}.bin ${SOURCE_FILES})
set_target_properties( ${PROJECT_NAME}.bin PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY ""
)