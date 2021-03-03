
#include <fstream>
#include <iostream>
#include <iterator>
#include <random>
#include <math.h>

#include "SimpleKalmanFilter.h"

int main() {
  // Define random generator with Gaussian distribution
  const double mean = 0.0;
  const double stddev = 0.5;
  std::default_random_engine generator;
  std::normal_distribution<double> dist(mean, stddev);
  // create filter
  double measurement_error = stddev;
  double estimation_error = stddev;
  double process_noise = 0.1;
  SimpleKalmanFilter kf =
      SimpleKalmanFilter(measurement_error, estimation_error, process_noise);

  // open file handle
  std::ofstream myfile;
  myfile.open("data.csv", std::ios::trunc);
  myfile << "measurement; state;";
  // sim
  unsigned int iterations = 500;
  for (int i = 0; i < iterations; i++) {
    // generate noise measurement
    double x = dist(generator);
    double rads = 2.0 * M_PI*i/100.0;
    x += std::sin(rads);
    // kalman stuff
    float estimated_x = kf.updateEstimate(x);
    // log to file
    myfile << x << "; " << estimated_x << std::endl;
  }
  // close file handle
  myfile.close();

  return 0;
}