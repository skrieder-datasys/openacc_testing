#include <openacc.h>
#include <stdio.h>

void saxpy_parallel(int n, float a, float *x, float *restrict y){
#pragma acc kernels
  for (int i = 0; i < n; ++i)
    y[i] = a*x[i] + y[i];
}

int main{

}
