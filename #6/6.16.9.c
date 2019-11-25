/*
 * @Author: Julian Liu 
 * @Date: 2019-11-24 11:49:02 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-25 22:40:41
 */

#include <stdio.h>

float fun(float a, float b) {
	return (a - b) / (a * b);
}

int main(void) {
	float a, b;
	printf("Enter two float number...");
	while (scanf("%f %f", &a, &b) == 2) {
		printf("%f\n", fun(a, b));
		printf("Enter two float number...");
	}
	return 0;
}
