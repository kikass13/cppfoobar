#include <iostream>
#include <chrono>
#include <array>
#include <thread>

#include <stdlib.h>
#include <signal.h>

static bool STOP = false;
void siginthandler(int param)
{
    STOP = true;
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

/// ###################################
/// Server includes 
/// ###################################
/// include generated idl stuff for services
#include "erpc_services/matrix/matrix_multiply_server.h"
/// include erpc base stuff
#include "erpc_server_setup.h"
#include "erpc_fifo_transport.h"
#include "erpc_tcp_transport.h"
/// ###################################
/// Client includes 
/// ###################################
/// include generated idl stuff for services
#include "erpc_services/matrix/matrix_multiply.h"
/// include erpc base stuff
#include "erpc_client_setup.h"
#include "erpc_fifo_transport.h"
#include "erpc_tcp_transport.h"

/* implementation of function call */
void erpcMatrixMultiply_service(Matrix matrix1, Matrix matrix2, Matrix result_matrix)
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
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << "; " << std::endl;
    }
    std::cout << "\n   * \n\n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << "; " << std::endl;
    }
    // std::cout << "\n   = \n\n";
    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 5; j++){
    //         std::cout << result_matrix[i][j] << " ";
    //     }
    //     std::cout << "; " << std::endl;
    // }
    std::cout << "Service erpcMatrixMultiply() end!" << std::endl;
}


static bool latestClientError = false;
void clientErrorCallback(erpc_status_t err, uint32_t functionID){
    latestClientError = err;
    if(err != 0)
        std::cout << "[ERROR] " << err << " in function " << functionID << std::endl; 
}


#define N 1000

int main()
{
    signal(SIGINT, siginthandler);
    signal(SIGTERM, siginthandler);

    std::queue<uint8_t> buffer1;
    std::queue<uint8_t> buffer2;

    std::queue<uint8_t>* serverReceiveBuf = &buffer1;
    std::queue<uint8_t>* serverSendBuf = &buffer2;
    std::queue<uint8_t>* clientReceiveBuf = &buffer2;
    std::queue<uint8_t>* clientSendBuf = &buffer1;
    /// ###############################################################
    /// Server
    /// ###############################################################
    std::thread t1([&] 
    {
        std::cout << "[Server] Starting ..." << std::endl;

        /* Init eRPC server environment */
        /* tcp transport layer initialization */
        erpc_transport_t s_transport = erpc_transport_fifo_init(serverReceiveBuf, serverSendBuf);
        // erpc_transport_t s_transport = erpc_transport_tcp_init("127.0.0.1", 13378, true);

        /* MessageBufferFactory initialization */
        erpc_mbf_t s_message_buffer_factory = erpc_mbf_dynamic_init();

        std::cout << "[Server] Initializing server ..." << std::endl;

        /* eRPC server side initialization */
        erpc_server_init(s_transport, s_message_buffer_factory);

        std::cout << "[Server] Adding services ..." << std::endl;

        /* connect generated service into server, look into erpc_matrix_multiply_server.h */
        erpc_service_t service = create_MatrixMultiplyService_service();
        erpc_add_service_to_server(service);

        std::cout << "[Server] Spinning ..." << std::endl;
        while(STOP == false){
            auto status = erpc_server_poll();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
        std::cout << "[Server] END ..." << std::endl; 
    });

    /// ###############################################################
    /// Client
    /// ###############################################################
    std::thread t2([&] 
    {
        std::cout << "[Client] Starting ..." << std::endl;

        /* Matrices definitions */
        Matrix matrix1, matrix2, result = {{0}};

        /* Init eRPC client environment */
        /* tcp transport layer initialization */
        erpc_transport_t c_transport = erpc_transport_fifo_init(clientReceiveBuf, clientSendBuf);
        // erpc_transport_t c_transport = erpc_transport_tcp_init("127.0.0.1", 13378, false);

        /* MessageBufferFactory initialization */
        erpc_mbf_t c_message_buffer_factory = erpc_mbf_dynamic_init();

        std::cout << "[Client] Initializing transport ..." << std::endl;

        /* eRPC client side initialization */
        erpc_client_init(c_transport, c_message_buffer_factory);
        erpc_client_set_error_handler(clientErrorCallback);
        
        /* other code like init matrix1 and matrix2 values */
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                matrix1[i][j] = j+1;
                matrix2[i][j] = j+1;
            }
        }
    
        while(STOP == false)
        {
            // std::cout << "[Client] Calling service ..." << std::endl;
            /* call eRPC functions */
            erpcMatrixMultiply(matrix1, matrix2, result);
            if(latestClientError == 0)
            {
                std::cout << "\n   = \n\n";
                /* other code like print result matrix */
                for(int i = 0; i < 5; i++){
                    for(int j = 0; j < 5; j++){
                        std::cout << result[i][j] << " ";
                        /// change input matrix slightly
                        matrix1[i][j] += 1;
                    }
                    std::cout << "; " << std::endl;
                }
            }
            std::cout << "[Client] Done ..." << std::endl; 
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        std::cout << "[Client] END ..." << std::endl; 
    });

    t1.join();
    t2.join();

    return 0;
}