#include <iostream>

/// include generated idl stuff for services
#include "erpc_services/matrix/matrix_multiply_server.h"
/// include erpc base stuff
#include "erpc_server_setup.h"
#include "erpc_tcp_transport.h"

/* implementation of function call */
void erpcMatrixMultiply(Matrix matrix1, Matrix matrix2, Matrix result_matrix)
{
    /* code for multiplication of matrices */
    std::cout << "Service erpcMatrixMultiply() called!" << std::endl;
    /// test: return matrix 1
    //std::memcpy(result_matrix, matrix1, 5*5*sizeof(uint32_t));
    /// initialize result matrix to zero
    std::memset(result_matrix, 0, 5*5*sizeof(uint32_t));
    // Multiplying matrix a and b and storing in result.
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            for(int k = 0; k < 5; ++k){
                result_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main()
{
    std::cout << "[Server] Starting ..." << std::endl;

    /* Init eRPC server environment */
    /* tcp transport layer initialization */
    erpc_transport_t transport = erpc_transport_tcp_init("127.0.0.1", 13378, true);

    /* MessageBufferFactory initialization */
    erpc_mbf_t message_buffer_factory = erpc_mbf_dynamic_init();

    std::cout << "[Server] Initializing server ..." << std::endl;

    /* eRPC server side initialization */
    erpc_server_init(transport, message_buffer_factory);

    std::cout << "[Server] Adding services ..." << std::endl;

    /* connect generated service into server, look into erpc_matrix_multiply_server.h */
    erpc_service_t service = create_MatrixMultiplyService_service();
    erpc_add_service_to_server(service);

    std::cout << "[Server] Spinning ..." << std::endl;

    /* run server */
    auto status = erpc_server_run(); /* or erpc_server_poll(); */
    
    std::cout << "[Server] Done [" << status << "] ..." << std::endl;
    // status should be 12 [kErpcStatus_ConnectionClosed] because the client dies after rpc'ing once

    return 0;
}