#include "main.h"



void workerTask(const std::string funcName){
    char* f = new char[funcName.length() + 1];
    strcpy(f, funcName.c_str());
    int returnVal;
    std::cout << "Executing Thread with func: " << f << " ..." <<  std::endl;
    bool success = execPythonFunction(f, EMPTY_ARGS, returnVal);
    if(success)
        std::cout << "returned: " << returnVal << std::endl;

    std::cout << "Thread " << f << " done." << std::endl;

}

int main(int argc, char* argv[])
{
    /// from:
    /// https://docs.python.org/2/extending/embedding.html
    ///
    /// initialize interpreter
    Py_SetProgramName(argv[0]);
    Py_Initialize();

    ///
    /// do $PYTHONPATH stuff
    char* currentPaths = Py_GetPath();
    char* defaultPaths = "/usr/lib/python2.7/dist-packages/:/usr/local/lib/python2.7/dist-packages/";
    char* localPath = ":.";
    char* newpaths;
    if((newpaths = (char*)malloc(strlen(currentPaths) + strlen(defaultPaths) + strlen(localPath)+1)) != NULL){
        newpaths[0] = '\0';   // ensures the memory is an empty string
        strcat(newpaths, defaultPaths);
        strcat(newpaths, currentPaths);
        strcat(newpaths, localPath);
    }
    PySys_SetPath(newpaths); // set out env $PYTHONPATH to our executable pwd
    std::cout << "$PYTHONPATH=" << newpaths << "\n";
    free(newpaths);

    ///
    /// execute stuff if needed
    /*PyRun_SimpleString("from time import time,ctime\n"
                         "print 'Today is',ctime(time())\n"); */

    ///
    /// import module and call functions and stuff
    PyObject* pName = PyString_FromString("xaxa");
    pModule_ = PyImport_Import(pName);

    if (pModule_ != NULL){
        int returnVal;
        std::cout << "Calling doRosInit() ..." << std::endl;
        bool success = execPythonFunction("doRosInit", EMPTY_ARGS, returnVal);
        if(success)
            std::cout << "returned: " << returnVal << std::endl;

        std::thread worker(workerTask, std::string("doRosStuff"));
        worker.detach();
    }
    else
    {
        PyErr_Print();
        return 1;
    }

    int idleTime = 5;
    int c = 0;
    while(c < idleTime){
        std::cout << "..." << std::endl;
        c++;
        sleep(1);
    }
    std::cout << "Program will close now ... ! :)" << std::endl;

    /// end interpreter
    Py_Finalize();

    return 0;
}


/*#include <pybind11/pybind11.h>
#include <pybind11/embed.h>

namespace py = pybind11;
*/

//#include <Python.h>
/*
PyObject *pName, *pModule, *pDict, *pFunc, *pValue, *presult;
// Initialize the Python Interpreter
Py_Initialize();

// Build the name object
pName = (const char*) "rospy";

// Load the module object
pModule = PyImport_Import(pName);

// pDict is a borrowed reference
pDict = PyModule_GetDict(pModule);
*/

/*
int main()
{


    py::scoped_interpreter guard{}; // start the interpreter and keep it alive
    py::print("Hello, World!"); // use the Python API


    py::module rospy = py::module::import("rospy");
    //rospy.attr("rospy.init_node('bt_plugin_manager'");




    return 0;
}

*/
