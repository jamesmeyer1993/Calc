/*
 * root.c
 *
 *  Created on: Jul 8, 2017
 *      Author: james
 */

#include <stdio.h>
#include "jexp.h"

double jroot(double A, int n){

	if(n == 0)
		return 0;
	if(n == 1)
		return n;

	double approx = 1/jpow(10,7);	// degree of error
	double x = 2;
	double B = jpow(x, n);
	int i = 1;

	while((B-A)>approx){
		double F_x = jpow(x, n) - A;
		double F_px = n * jpow(x, n-1);
		x = x - (F_x/F_px);
		B = jpow(x, n);
		i++;
	}

	printf("[calc]: root operation complete:\n");
	printf("[calc]: \tIterations: %d\n", i);
	printf("[calc]: \tA = %lf\tn = %d\tx = %lf\tB = %lf\n", A, n, x, B);

	return x;
}
