#include "datapoint.h"

using namespace std;

DataPoint::DataPoint(){}

DataPoint::DataPoint(const VectorXd raw)
{
  this->raw = raw;
}

//return only your contents (2D)
VectorXd DataPoint::get() const
{
    return this->raw;
}

// the kalman state is 4d, so we need to return a 4d measurement
/*VectorXd DataPoint::get_state() const
{
    VectorXd state(4);
    double x = this->raw[0];
    double y = this->raw[1];
    state << x, y, 0, 0;
    return state;
}*/

//print datapoint to screen
void DataPoint::print(std::string s) const
{
    double x = this->get()[0];
    double y = this->get()[1];

    int screenX = (int)(x);
    for(int i = 0; i < screenX; i++)
        std::cout << " ";
    std::cout << s << std::endl;
}
