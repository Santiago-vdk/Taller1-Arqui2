#include <stdio.h>
#include <math.h>
#include <omp.h>
long factorial(int x){
	int a = 1;
	int result = 1;
	for (a = x; a > 1; a--){
	    result = result * a;
	  }
	return result;
}

int main ()
{
    int i, nprocs = 0;
    int x = 10; 
    int terminos = 14;
    long ex = 0;

    double start_time, run_time;
        omp_set_num_threads(8);

        start_time = omp_get_wtime();
        #pragma omp parallel
        {
	    for (i=0;i<terminos;i++) {
		    long p = pow(x,i);
		long f = factorial(i);
		long div = (p/f);
		ex = ex + div;
	    }
        }
        run_time = omp_get_wtime() - start_time;
    printf("\n e^10 es %lu en %f segundos y %d threads\n",ex,run_time,8);
    return 0;
}
