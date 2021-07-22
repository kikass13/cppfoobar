cmake_minimum_required(VERSION 2.8.3)
project(thread_isolation)


add_compile_options(-std=c++17)


## Declare cpp executables
add_executable(${PROJECT_NAME} "main.cpp")


## Specify libraries to link executable targets against
target_link_libraries(${PROJECT_NAME}
  pthread
)
