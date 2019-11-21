/*
 * @Author: Julian Liu 
 * @Date: 2019-11-21 14:52:48 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-21 14:59:17
 */

#include <stdio.h>

double cube(double i) {
	return i * i * i;
}

int main(void) {
	double i;

	printf("Enter a float num...");
	scanf("%lf", &i);
	printf("%lf", cube(i));

	return 0;
}