#include "kalmanfilter.h"

// x - state vector
// P - uncertainty covariance matrix of state x (process covariance)
// z - measurement vector
// R - uncertainty covariance matrix of sensor that produces z (measurement covariance)
// F - update matrix - used to get predicted x - based on time elapsed and assumed dynamic model being tracked
// H - measurement extraction matrix - used to extract the hypothetical measurement if state x is correct and the sensor is perfect
// Q - Process noise covariance matrix - adds uncertainty to the process covariance
// S - 'innovation' covariance that combines process covariance and measurement covariance
// y - difference between the actual measurement and the predicted measurement
// K - Kalman gain - contains information on how much weight to place on the current prediction and current observed measurement
//   - that will result the final fused updated state vector and process covariance matrix
//   - computed from P (process covariance), H (extraction), R (measurement covariance)


void KalmanFilter::start(const int n, const VectorXd& xin,
                         const MatrixXd& Pin, const MatrixXd& Fin,
                         const MatrixXd& Qin)
{
    //dimensions of state
    this->n = n;
    //build identity matrix with size of n
    this->I = MatrixXd::Identity(this->n, this->n);
    //remember state of input measurement
    this->x = xin;
    //remember allready build ProcessErrorCovariance
    this->P = Pin;
    //remember transition matrix
    this->F = Fin;
    //remember input ProcessNoise
    this->Q = Qin;
}

// process nois is a function of dt,
// which can differ in multi_input_sensor system
void KalmanFilter::setQ(const MatrixXd& Qin)
{
    //reset Process Noise matrix
    this->Q = Qin;
}

// we need this function to reset the transition matrix
// this matrix defines what has to be done from t_n to t_n+1
// that means it is dependent on dt,
// which can differ in multi_input_sensor system
void KalmanFilter::updateF(const double dt)
{
    /*
            | 1  0 dt  0 |
            | 0  1  0 dt |
     F   =  | 0  0  1  0 |
            | 0  0  0  1 |
    */
    this->F(0, 2) = dt;
    this->F(1, 3) = dt;
}

VectorXd KalmanFilter::get() const
{
    return this->x;
}

void KalmanFilter::predict()
{
    /*
      //what we want to do ...
      px' = px + vx * dt
      py' = py + vy * dt
      vx' = vx
      vy' = vy
      |px'|     | 1  0 dt  0 |   | px |
      |py'|  =  | 0  1  0 dt | * | py |
      |vx'|     | 0  0  1  0 |   | vx |
      |vy'|     | 0  0  0  1 |   | yz |

      prediction step is defined by:
       x' = F * x * F' + Q
    */

    this->x = this->F * this->x;
    this->P = this->F * this->P * this->F.transpose() + this->Q;
}

void KalmanFilter::update(const VectorXd& z, const MatrixXd& H,
                          const VectorXd& Hx, const MatrixXd& R)
{
    // calculate innovation covariance
    const MatrixXd PHt = this->P * H.transpose();
    const MatrixXd S = H * PHt + R;

    // calculate Kalman Gain, which determines how much we trust the new measurements
    // high Kalman Gain means more trust in measurement, less trust into the Process model itself
    const MatrixXd K = PHt * S.inverse();

    // calculate the innovation
    // simply the difference between our measurement and our State
    VectorXd innovation = z - Hx;

    // update our state n by taking our old state n-1 and applying the innovation to it
    // we will use the Kalman Gain (which defines how much we trust the new measurement)
    // to simply ignore most of the change the measurement would mean to our state
    // if the gain is low, because the measurement is noisy
    this->x = this->x + K * innovation;         //post state estimate x^hat
    //update our state covariance (overall state uncertainty)
    this->P = (this->I - K * H) * this->P;      //post state covariance P^hat
}
