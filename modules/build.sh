#!/bin/bash

#sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test
#sudo apt install -y gcc-11
#sudo apt install -y g++-11

g++-11 -std=c++20 -fmodules-ts speech_english.cxx speech_spanish.cxx speech.cxx main.cpp
