/*
 * @Author: Julian Liu 
 * @Date: 2019-11-24 04:30:55 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-24 11:54:29
 */

#include <stdio.h>

int main(void) {
	float a, b;
	printf("Enter two float number...");
	while (scanf("%f %f", &a, &b) == 2) {
		printf("%f\n", (a - b) / (a * b));
		printf("Enter two float number...");
	}
}
