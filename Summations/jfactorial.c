/*
 * jfactorial.c
 *
 *  Created on: Jul 14, 2017
 *      Author: james
 */
#include "../Exponents/jexp.h"

int jfactorial(int x){

	if(x < 1)
		return 0;
	if(x == 1 || x == 2)
		return x;

	for(int i = x-1; i > 0; i--){
		x = x * i;
	}

	return x;
}

int jdoublefactorial(int x){

	if(x < 1)
		return 0;
	if(x < 3)
		return x;
	/*
	 * if x is an even number, for ease of calculations,
	 * let's make it odd because the outcome makes no
	 * difference.
	 */
	if(x%2 == 0)
		x--;

	for(int i = x-2; i > 0; i=i-2){
		x = x * i;
	}

	return x;
}
/*
 * jsuperfactorial:
 * Most commonly denoted in math as $N or sf(x), where
 * 	$N = n! * (n-1)! * (n-2)! ...
 *
 * 	TODO: integrate "bignumbers" to handle results
 *
 * 	Currently cannot iterate accurately past 7
 */
int jsuperfactorial(int x){

	if(x == 0)
		return 1;
	if(x == 1)
		return x;

	x = jfactorial(x) * jsuperfactorial(x-1);

	return x;
}
/*
 * Hyperfactorial:
 * 	H(n) = n^(n) * n^(n-1) * n^(n-2)...
 *
 * 	TODO: integrate "bignumbers" to handle results
 *
 * 	Currently cannot iterate accurately past 5
 */
int jhyperfactorial(int x){

	if(x < 0)
		return 0;
	if(x == 0)
		return 1;
	if(x == 1)
		return x;

	x = jpow(x, x) * jhyperfactorial(x-1);

	return x;
}
