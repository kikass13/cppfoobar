#include <iostream>

/// include generated idl stuff for services
#include "erpc_services/matrix/matrix_multiply.h"
/// include erpc base stuff
#include "erpc_client_setup.h"
#include "erpc_tcp_transport.h"

int main()
{
    std::cout << "[Client] Starting ..." << std::endl;

    /* Matrices definitions */
    Matrix matrix1, matrix2, result_matrix = {{0}};

    /* Init eRPC client environment */
    /* tcp transport layer initialization */
    erpc_transport_t transport = erpc_transport_tcp_init("127.0.0.1", 13378, false);

    /* MessageBufferFactory initialization */
    erpc_mbf_t message_buffer_factory = erpc_mbf_dynamic_init();

    std::cout << "[Client] Initializing transport ..." << std::endl;

    /* eRPC client side initialization */
    erpc_client_init(transport, message_buffer_factory);

    /* other code like init matrix1 and matrix2 values */
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrix1[i][j] = j;
            matrix2[i][j] = j;
        }
    }

    std::cout << "[Client] Calling service ..." << std::endl;

    /* call eRPC functions */
    erpcMatrixMultiply(matrix1, matrix2, result_matrix);

    /* other code like print result matrix */
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << result_matrix[i][j] << " ";
        }
        std::cout << "; " << std::endl;
    }

    std::cout << "[Client] Done ..." << std::endl;

    return 0;
}