cmake_minimum_required(VERSION 3.0.0)
project(lely VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

### the `pkg_check_modules` function is created with this call
find_package(PkgConfig REQUIRED) 

### should be installed into /usr/local/lib (lely-core installation guide)
### these calls create special `PkgConfig::<MODULE>` variables
pkg_check_modules(lely-pkg REQUIRED IMPORTED_TARGET liblely-coapp)

include_directories(
    ${lely-pkg_INCLUDE_DIRS}
)
#############################################################################
### slave
#########################
#set(SOURCE_FILES
#    ${CMAKE_CURRENT_SOURCE_DIR}/slave.cpp
#)
#add_executable(slave 
#    ${SOURCE_FILES}
#)
#target_link_libraries(slave PUBLIC
#    PkgConfig::lely-pkg
#)
#set_target_properties(slave PROPERTIES
#    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#    RUNTIME_OUTPUT_DIRECTORY ""
#)
#target_compile_options(slave PRIVATE 
#    -Wno-write-strings
#)
#target_compile_definitions(slave PUBLIC 
#    LELY_NO_MALLOC=1
#)

#############################################################################
### slave using static eds compilation
#########################
#set(SOURCE_FILES
#    ${CMAKE_CURRENT_SOURCE_DIR}/slave_staticEds.cpp
#)
#add_executable(slave_static
#    ${SOURCE_FILES}
#)
#target_link_libraries(slave_static PUBLIC
#    PkgConfig::lely-pkg
#)
#set_target_properties(slave_static PROPERTIES
#    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#    RUNTIME_OUTPUT_DIRECTORY ""
#)

#############################################################################
### master
#########################
#set(SOURCE_FILES
#    ${CMAKE_CURRENT_SOURCE_DIR}/master.cpp
#)
#add_executable(master 
#    ${SOURCE_FILES}
#)
#target_link_libraries(master PUBLIC
#    PkgConfig::lely-pkg
#)
#set_target_properties(master PROPERTIES
#    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#    RUNTIME_OUTPUT_DIRECTORY ""
#)
#target_compile_options(master PRIVATE 
#    -Wno-write-strings
#)
#target_compile_definitions(master PUBLIC 
#    LELY_NO_MALLOC=1
#)


#############################################################################
### master using static eds compilation
#########################
#set(SOURCE_FILES
#    ${CMAKE_CURRENT_SOURCE_DIR}/master_staticEds.cpp
#)
#add_executable(master_staticEds 
#    ${SOURCE_FILES}
#)
#target_link_libraries(master_staticEds PUBLIC
#    PkgConfig::lely-pkg
#)
#set_target_properties(master_staticEds PROPERTIES
#    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
#    RUNTIME_OUTPUT_DIRECTORY ""
#)

#############################################################################
### master slave with user defined channels
#########################
set(SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/userChannelMasterSlave.cpp
)
add_executable(userChannelExample 
    ${SOURCE_FILES}
)
target_link_libraries(userChannelExample PUBLIC
    PkgConfig::lely-pkg
)
set_target_properties(userChannelExample PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY ""
)
target_compile_options(userChannelExample PRIVATE 
    -Wno-write-strings
)
target_compile_definitions(userChannelExample PUBLIC 
    LELY_NO_MALLOC=1
)
