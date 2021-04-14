#!/bin/bash


dcf2c $PWD/eds/cpp-slave.eds MySlave1 > $PWD/eds/eds-slave.hpp

dcfgen -r $PWD/eds/master-eds.yaml -d $PWD/eds/

dcf2c $PWD/eds/master.dcf MyMaster > $PWD/eds/eds-master.hpp