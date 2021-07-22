cmake_minimum_required(VERSION 2.8)
project(hungarian)

add_compile_options(-std=c++11)

add_executable(${PROJECT_NAME} "main.cpp" "Hungarian.cpp")
