#pragma once;


#include <iostream>
#include <string>
#include <thread>
#include <vector>



#include <Python.h>



#define EMPTY_ARGS PyTuple_New(0)

static PyObject* pModule_;




template <class T>
T getReturnValueFromFunction(PyObject* fvalue);


template<class T>
bool execPythonFunction(char* f, PyObject* fargs, T& ret)
{
    PyObject* pFunc;
    PyObject* fvalue;

    pFunc = PyObject_GetAttrString(pModule_, f);
    // pFunc is a new reference
    if (pFunc && PyCallable_Check(pFunc))
    {
        // pValue reference stolen here:
        fvalue = PyObject_CallObject(pFunc, fargs);
    }
    else {
        if (PyErr_Occurred()){
            PyErr_Print();
            return false;
        }

    }

    ret = getReturnValueFromFunction<T>(fvalue);
    return true;
}







template <>
int getReturnValueFromFunction<int>(PyObject* fvalue){
    return PyInt_AsLong(fvalue);
}
