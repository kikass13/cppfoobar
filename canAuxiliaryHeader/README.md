
## build

cd ~/cppfoobar/canAuxiliaryHeader
cmake CMakeLists.txt
make


## run

 * start executable
    * ./canAuxiliaryHeader vcan0
 *  send some can data via cantools
    * cansend vcan0 110#12

