#include <stdio.h>
#include <math.h>

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
    
    int i = 0;
    int x = 10; 
    int terminos = 14;
    double ex = 0;

    for (i=0;i<terminos;i++) {
            double p = pow(x,i);
	long f = factorial(i);
	double div = (p/f);
	ex = ex + div;
    }
    printf("Resultado e**100: e^%d = %lf\n", x, ex);
    return 0;
}
