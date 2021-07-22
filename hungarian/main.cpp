#include <iostream>
#include "Hungarian.h"


/// FROM:
/// https://github.com/mcximing/hungarian-algorithm-cpp

// example from http://www.hungarianalgorithm.com/examplehungarianalgorithm.php:
//
// We consider an example where four jobs (J1, J2, J3, and J4) need to be executed by four workers (W1, W2, W3, and W4),
// one job per worker. The matrix below shows the cost of assigning a certain worker to a certain job. The objective is
// to minimize the total cost of the assignment.
//
//          J1 	J2 	J3 	J4
//   W1 	82 	83 	69 	92
//   W2 	77 	37 	49 	92
//   W3 	11 	69 	5 	86
//   W4 	8 	9 	98 	23


int main(void)
{
    // please use "-std=c++11" for this initialization of vector.
    std::vector< std::vector<double> > costMatrix = {
                                        { 82, 19, 8, 15, 0 },
                                        { 10, 18, 7, 17, 0 },
                                        { 13, 16, 9, 14, 0 },
                                        { 12, 19, 8, 18, 0 }
    };

    HungarianAlgorithm HungAlgo;
    vector<int> assignment;

    double cost = HungAlgo.Solve(costMatrix, assignment);

    for (unsigned int x = 0; x < costMatrix.size(); x++)
        std::cout << x << "," << assignment[x] << "\t";

    std::cout << "\ncost: " << cost << std::endl;

    return 0;
}
