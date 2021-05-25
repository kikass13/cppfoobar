#!/bin/bash

### old tool used by the lely-core/master 
#dcf2c $PWD/eds/cpp-slave.eds MySlave1 > $PWD/eds/eds-slave.hpp
### new tool used by lely-core/n7space/ecss
dcf2dev eds/cpp-slave.eds MySlave1 > $PWD/eds/eds-slave.hpp

dcfgen -r $PWD/eds/master-eds.yaml -d $PWD/eds/
### old tool used by the lely-core/master 
#dcf2c $PWD/eds/master.dcf MyMaster > $PWD/eds/eds-master.hpp
### new tool used by lely-core/n7space/ecss
dcf2dev eds/master.dcf MyMaster > $PWD/eds/eds-master.hpp
