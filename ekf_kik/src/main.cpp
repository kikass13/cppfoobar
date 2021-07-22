#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <chrono>

#include "Eigen/Dense"
#include "datapoint.h"
#include "tools.h"
#include "fusionekf.h"

using std::vector;
using Eigen::MatrixXd;
using Eigen::VectorXd;


//amount of measurement values created
#define     N               100

//measurement noise (normal distribution)
#define     GAUSS_MEAN      100.0
#define     GAUSS_SIGMA     80.0


int main(int argc, char* argv[])
{
    std::cout << "Im doing Kalman now ... :)" << std::endl;

    /*******************************************************************
    * GENERATE MEASUREMENTS
    *******************************************************************/
    vector<DataPoint> input_data;
    for(int i = 0; i < N; i++)
    {
        // construct a trivial random generator engine from a time-based seed:
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine generator (seed);
        std::normal_distribution<double> distribution (GAUSS_MEAN, GAUSS_SIGMA); // (mean, sigma_deviaton)
        double x = distribution(generator);

        VectorXd dp_raw(2);
        dp_raw  << x, 0.0;      //set state: [x, y]'
        input_data.push_back(DataPoint(dp_raw));
    }

    /*******************************************************************
    * USE DATA AND FUSIONEKF FOR STATE ESTIMATIONS
    *******************************************************************/
    FusionEKF fusionEKF;

    vector<VectorXd> estimations;
    vector<VectorXd> ground_truths;

    for (int i = 0; i < input_data.size(); i++)
    {
        //get measurement
        input_data[i].print(".");

        //process a measurement
        // this will do a predict/update cycle
        fusionEKF.process(input_data[i]);

        //grab the esitmated state
        VectorXd prediction = fusionEKF.get();

        //dummy create Datapoint
        VectorXd track(2);
        track  << prediction[0], prediction[1];          //set state: [x, y]'
        DataPoint track_dp = DataPoint(track);
        track_dp.print("X");
        usleep(10000);
    }

    std::cout << "Done." << std::endl;
    return 0;
}
