cmake_minimum_required(VERSION 2.8)
project(pythonFromCppRos)

add_compile_options(-std=c++11)




#find_package(pybind11 REQUIRED)
#set(PYBIND11_PYTHON_VERSION 2.7)

add_executable(${PROJECT_NAME} "main.cpp")

### nope, pybind wont work with py2
### -I/usr/include/python2.7 -lpython2.7
#include_directories("/usr/include/python2.7")
#target_compile_options(${PROJECT_NAME} PRIVATE -lpython2.7)

#target_link_libraries(${PROJECT_NAME} PRIVATE pybind11::embed)





find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${PYTHON_LIBRARIES})



find_package (Threads)
target_link_libraries (${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT})
