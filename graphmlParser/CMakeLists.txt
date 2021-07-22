cmake_minimum_required(VERSION 2.8.3)
project(graphmlParser)

## Use C++11
add_definitions(-std=c++11)

# openMP
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp")

# Set to Release in order to speed up the program significantly
#set(CMAKE_BUILD_TYPE Release) #None, Debug, Release, RelWithDebInfo, MinSizeRel
set(CMAKE_BUILD_TYPE Debug)

# Make sure symbols are there, and not fail at runtime
set(CMAKE_SHARED_LINKER_FLAGS "-Wl,--no-undefined")



###########
## Build ##
###########

#cascade files recusively - could be usefull if multiple files exist
FILE(GLOB_RECURSE HeaderFiles "*.h")
FILE(GLOB_RECURSE SourceFiles "*.cpp")

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
)

## Declare cpp executables
add_executable(${PROJECT_NAME}
    ${SourceFiles}
    ${HeaderFiles}
)

target_link_libraries(${PROJECT_NAME}
    )
