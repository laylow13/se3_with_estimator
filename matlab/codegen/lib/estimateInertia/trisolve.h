//
// File: trisolve.h
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 29-Feb-2024 17:32:45
//

#ifndef TRISOLVE_H
#define TRISOLVE_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
namespace coder {
namespace internal {
void b_trisolve(const double A[9], double B[18]);

void trisolve(const double A[9], double B[18]);

} // namespace internal
} // namespace coder

#endif
//
// File trailer for trisolve.h
//
// [EOF]
//
