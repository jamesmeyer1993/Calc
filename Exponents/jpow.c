/*
 * jpow.c
 *
 *  Created on: Jul 8, 2017
 *      Author: james
 */

double jsquare(double x);
double jcube(double x);

double jpow(double x, int n){

	if(n == 0)
		return 0;
	if(n == 1)
		return x;
	if(n == 2)
		return jsquare(x);
	if(n == 3)
		return jcube(x);

	double result = x;
	for(int i = 1; i < n; i++){
		result = result * x;
	}
	return result;
}

double jsquare(double x){
	return x * x;
}

double jcube(double x){
	return x * x * x;
}
