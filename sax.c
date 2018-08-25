#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <omp.h>

int main ()
{
    int i = 0;

    double start_time, run_time;

    int size = 100000;
    int X[size];
    int Y[size];    
    int Z[size];
 
    for(i = 0; i < size; i++) {
        X[i] = i;
        Y[i] = size - i;
    }
	int escalar = 5; 
    

    /*start timer */
    start_time = omp_get_wtime();


    for (i=0;i<= size; i++){
	    Z[i] = X[i] + Y[i]*escalar;
    }



    run_time = omp_get_wtime() - start_time;
    printf("\n X[5] = %d, Y[5] = %d, Z[5] = %d finished in %f seconds \n",X[5],Y[5],Z[5],run_time);

}
