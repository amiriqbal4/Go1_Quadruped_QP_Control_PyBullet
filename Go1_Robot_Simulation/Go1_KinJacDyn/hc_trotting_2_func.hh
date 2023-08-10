/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 20:50:54 GMT-05:00
 */

#ifndef HC_TROTTING_2_FUNC_HH
#define HC_TROTTING_2_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void hc_trotting_2_func_raw(double *p_output1, const double *var1);

  inline void hc_trotting_2_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    hc_trotting_2_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // HC_TROTTING_2_FUNC_HH
