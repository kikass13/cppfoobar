#ifndef DATAPOINT_H_
#define DATAPOINT_H_

#include "../src/Eigen/Dense"
#include <stdlib.h>
#include <iostream>
#include "tools.h"

using Eigen::MatrixXd;
using Eigen::VectorXd;

class DataPoint{

  private:
    VectorXd raw;

  public:
    DataPoint();
    DataPoint(const VectorXd raw);
    VectorXd get() const;
    VectorXd get_state() const;
    void print(std::string s) const;
};

#endif /* DATAPOINT_H_*/
