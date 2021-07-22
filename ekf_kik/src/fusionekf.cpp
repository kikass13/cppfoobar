#include "fusionekf.h"

// x - state vector
// P - uncertainty covariance matrix of state x (process covariance)
// z - measurement vector
// R - uncertainty covariance matrix of sensor that produces z (measurement covariance)
// F - Transition matrix / update matrix - used to get predicted x - based on time elapsed and assumed dynamic model being tracked
// H - extraction matrix - used to extract the hypothetical measurement if state x is correct and the sensor is perfect
// Q - noise covariance matrix - adds uncertainty to the process covariance
// S - 'innovation' covariance that combines process covariance and measurement covariance
// y - difference between the actual measurement and the predicted measurement
// K - Kalman gain - contains information on how much weight to place on the current prediction and current observed measurement
//   - that will result the final fused updated state vector and process covariance matrix
//   - computed from P (process covariance), H (extraction), R (measurement covariance)

FusionEKF::FusionEKF()
{
    //initialize the ekf
    this->initialized = false;

    //initialize matrices
    //MeasurementNoiseCovariance_R
    this->lidar_R = MatrixXd(this->lidar_n, this->lidar_n);
    //MeasurementObservationMatrix_H
    this->lidar_H = MatrixXd(this->lidar_n, this->n);
    this->P = MatrixXd(this->n, this->n);
    //TransitionMatrix_F, set to identity
    this->F = MatrixXd::Identity(this->n, this->n);
    this->Q = MatrixXd::Zero(this->n, this->n);

    // measurement covariance
    // high values will let the Kalman gain > 0,
    // which will put les trust into measurements
    this->lidar_R <<    0.0100, 0.0000,
                        0.0000, 0.0100;


    // measurement extraction matrix, enable flags for state variables
    this->lidar_H <<    1.0, 0.0, 0.0, 0.0,
                        0.0, 1.0, 0.0, 0.0;

    //ProcessErrorCovariance

    this->P <<          1.000, 0.000, 0.000, 0.000,
                        0.000, 1.000, 0.000, 0.000,
                        0.000, 0.000, 1000.0, 0.000,
                        0.000, 0.000, 0.000, 1000.0;
}


// we need this function to calculate the process noise
// process nois is a function of dt,
// which can differ in multi_input_sensor system
void FusionEKF::updateQ(const double dt)
{
    /*
    * The plant noise serves to stabilize (in a sense) the filter against becoming over confident in its estimate of the state.
    * Low Q indicates confidence that any unknown noise terms and/or modelling errors are small to negligible.
    * Higher Q allows the tracker to follow the state despite unknown noise and/or model errors
    * Q can be zero and the KF will still run (as long as the system is observable) but it will pretty much ignore the data
    * (kalman gain approx = 0). You need some Q>0 to allow the filter to weight current observations via the Kalman gain.
    */

    //set process noise Q by estimating the maximum error in time dt
    //using newtons law of motion
    const double dt2 = dt * dt;
    const double dt3 = dt * dt2;
    const double dt4 = dt * dt3;

    const double r11 = dt4 * this->ax / 4;
    const double r13 = dt3 * this->ax / 2;
    const double r22 = dt4 * this->ay / 4;
    const double r24 = dt3 * this->ay / 2;
    const double r31 = dt3 * this->ax / 2;
    const double r33 = dt2 * this->ax;
    const double r42 = dt3 * this->ay / 2;
    const double r44 = dt2 * this->ay;

    this->Q <<  r11, 0.0, r13, 0.0,
                0.0, r22, 0.0, r24,
                r31, 0.0, r33, 0.0,
                0.0, r42, 0.0, r44;

    //set Q on Kalman Filter
    this->KF.setQ(Q);
}

void FusionEKF::start(const DataPoint& data)
{
    // get full state of measurement (4d)
    //VectorXd initData = data.get_state();
    // we could us the "get" method for grabbing only its raw values
    // and append the rest here to get a 4d kalman init state
    VectorXd initData(4);
    initData << data.get() , 0, 0;

    this->KF.start(this->n, initData, this->P, this->F, this->Q);
    this->initialized = true;
}

void FusionEKF::compute(const DataPoint& data)
{
    // delta t since last timestep
    // this will have an impact on our process noise - the more time has passed,
    // the more uncertain is our model, hence we will trust the measurements more
    // this is fixed by sensor inputs normaly.
    const double dt = 0.02;


    /**************************************************************************
    * PREDICTION STEP
    **************************************************************************/
    // update the Process Noise Covariane Matrix of the EKF
    // because it is dependant on dt, which can differ
    this->updateQ(dt);

    // update transition matrix of the EKF
    // because it is dependant on dt, which can differ
    this->KF.updateF(dt);

    //do prediction step
    this->KF.predict();

    /**************************************************************************
    * UPDATE STEP
    **************************************************************************/
    //grab measurement data z (raw 2d vals)
    const VectorXd z = data.get();
    //get actual state of EKF model
    const VectorXd x = this->KF.get();

    VectorXd Hx;
    MatrixXd R;
    MatrixXd H;

    // for linear measurement extraction
    //_____________________________________________
    //set our sensor specific matrices
    H = this->lidar_H;
    Hx = this->lidar_H * x;
    R = this->lidar_R;

    // for non linear measurement extraction
    //_____________________________________________
    /*
    //calculate jacobian of input measurement state,
    //which was converted into kalmann state vector via a non-linear function
    // example RADAR:   x[0] = r * cos(phi); x[1] = r * sin(phi);
    // H now has the jacobian linearized measurement as input
    VectorXd s = data.get_state();
    H = calculate_jacobian(s);
    // to update our state vector, we need to convert our state into the the same coordinates as the mesaurement
    // we cannot calculate a proper innovation, if both reference frames are different
    Hx = convert_cartesian_to_polar(x);
    R =  this->radar_R;
    */

    //do the update step
    //z and X will be used for innovation
    this->KF.update(z, H, Hx, R);
}

void FusionEKF::process(const DataPoint& data)
{
    // if we have allready initialized, we just predict/update
    if(this->initialized)
        this->compute(data);
    // if we have the first measurement (init == false), we start the ekf
    else
        this->start(data);
}

VectorXd FusionEKF::get() const
{
    //return state of ekf
    return this->KF.get();
}
