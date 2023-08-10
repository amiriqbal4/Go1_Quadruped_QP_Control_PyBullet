/*
 * Automatically Generated from Mathematica.
 * Tue 7 Mar 2023 21:29:07 GMT-05:00
 */

#ifndef CE3_VEC3_GO1_DESCRIPTION_HH
#define CE3_VEC3_GO1_DESCRIPTION_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Ce3_vec3_go1_description_raw(double *p_output1, const double *var1,const double *var2);

  inline void Ce3_vec3_go1_description(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 18, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Ce3_vec3_go1_description_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // CE3_VEC3_GO1_DESCRIPTION_HH
