cmake_minimum_required(VERSION 3.0.0)
project(erpcExample VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")


include_directories(
    ### erpc specific includes
    erpc_c/infra
    erpc_c/config
    erpc_c/port
    erpc_c/setup 
    erpc_c/transports
)
### client
file(GLOB ERPC_SRC
    "erpc_c/setup/erpc_setup_tcp.cpp"
    "erpc_c/setup/erpc_setup_mbf_dynamic.cpp"
    "erpc_c/setup/erpc_client_setup.cpp"

    "erpc_c/transports/erpc_tcp_transport.cpp"
    "erpc_c/infra/*.cpp"
    "erpc_c/port/erpc_threading_pthreads.cpp"
    "erpc_c/config/*.cpp"
)
set(SOURCE_FILES
    ${ERPC_SRC}
    client.cpp
    erpc_services/matrix/matrix_multiply_client.cpp
)
add_executable(client ${SOURCE_FILES})
set_target_properties(client PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY ""
)


### server
file(GLOB ERPC_SRC
    "erpc_c/setup/erpc_setup_tcp.cpp"
    "erpc_c/setup/erpc_setup_mbf_dynamic.cpp"
    "erpc_c/setup/erpc_server_setup.cpp"

    "erpc_c/transports/erpc_tcp_transport.cpp"
    "erpc_c/infra/*.cpp"
    "erpc_c/port/erpc_threading_pthreads.cpp"
    "erpc_c/config/*.cpp"
)

set(SOURCE_FILES 
    ${ERPC_SRC}
    server.cpp
    erpc_services/matrix/matrix_multiply_server.cpp
)
add_executable(server ${SOURCE_FILES})
set_target_properties(server PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY ""
)