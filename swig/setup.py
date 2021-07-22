from distutils.core import setup, Extension

extension_mod = Extension("_swigdemo", ["_swigdemo_module.cc", "hello.cpp"])

setup(name = "swigdemo", ext_modules=[extension_mod])
