cmake_minimum_required(VERSION 3.0.0)
project(erpcExample VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

### erpc specific includes
include_directories(
    erpc_c/infra
    erpc_c/config
    erpc_c/port
    erpc_c/setup 
    erpc_c/transports
)
#############################################################################
### client
#########################
### source files
set(SOURCE_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/client.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/erpc_c/setup/erpc_setup_tcp.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/erpc_c/setup/erpc_client_setup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/erpc_services/matrix/matrix_multiply_client.cpp
)
### target
add_executable(client ${SOURCE_FILES})
target_link_libraries(client ${CMAKE_SOURCE_DIR}/Debug/Linux/erpc/lib/liberpc.a )
set_target_properties(client PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY ""
)


#############################################################################
### server
#########################
set(SOURCE_FILES 
    server.cpp
    erpc_c/setup/erpc_setup_tcp.cpp
    erpc_services/matrix/matrix_multiply_server.cpp
)
add_executable(server ${SOURCE_FILES})
target_link_libraries(server ${CMAKE_SOURCE_DIR}/Debug/Linux/erpc/lib/liberpc.a)
set_target_properties(server PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY ""
)