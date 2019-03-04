#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  // Initialize PID coefficients (and errors, if needed)
  
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;

  p_error = d_error = i_error = 0.0;
}

void PID::UpdateError(double cte) {
  // Update PID errors based on cte.
  
  // delta of old error from current
  d_error = cte - p_error;
  // update p_error
  p_error = cte;
  // sum of cte
  i_error += cte;
}

double PID::TotalError() {
  // Calculate and return the total error

  return Kp * p_error + Kd * d_error + Ki * i_error;
}