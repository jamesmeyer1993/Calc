#include <stdio.h>

#include "jmath.h"

/*double root(double A, int n){
	double x = 2.0;
	double B = pow(x, n);

	if(B == A)
		return x;

	double x_max = 2.0;
	double x_min = 0.0;

	int count = 0;

	while(B != A){

		if(count > 9)
			return x;

		if(B < A){
			x_min = x;
			x_max *= 2;
		}
		if(B > A){
			x_max = x;
		}
		x = (x_max + x_min) / 2;
		B = pow(x, n);

		printf("[calc]:\t|\t%d |\tx_min=%lf |\tx_max=%lf |\tx=%lf |\tB=%lf\n", count, x_min, x_max, x, B);

		count++;
	}

	return x;
}*/



//int iPow(int x, int n);


int main(){
	printf("[calc]: Running.\n\n");

/*	for(int i=0; i<9; i++){
		printf("sf(%d) = %d\n", i, jhyperfactorial(i));
	}*/

	double sum = 0.0;

	for(int n = 1; n < 9999; n++){
		double f = 1/(jpow(n, 2));
		double g = 1/(jpow(n+3, 2));
		sum = sum + (f - g);
	}

	printf("[calc]: SUM = %lf", sum);
}
