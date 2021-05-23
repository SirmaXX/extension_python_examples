#include <stdio.h>
#include <Python.h>
#include <time.h>


int addition (int a, int b) { 

  return a+b; 
}


// sum of two number
static PyObject* DemoLib_addition(PyObject *self, PyObject *args) {
   int a;
   int b;
   if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
      return NULL;
   }
   
 return Py_BuildValue("i", addition(a,b));
}

// module's function table
static PyMethodDef demoMethods[] ={
     {"DemoLib_addition", DemoLib_addition, METH_VARARGS, "sum of two number"},
     {NULL, NULL, 0, NULL}
};

static struct PyModuleDef demomodule = {
  PyModuleDef_HEAD_INIT,
  "demo",
  NULL, 
  -1,
  demoMethods
};

PyMODINIT_FUNC
PyInit_demo()
{


  PyObject* pModule = PyModule_Create(&demomodule);
 
    return pModule ;


}
