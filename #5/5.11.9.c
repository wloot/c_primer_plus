/*
 * @Author: Julian Liu 
 * @Date: 2019-11-21 15:08:48 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-21 15:17:03
 */

#include <stdio.h>

void Temperatures(double i) {
	const float c = 32.0;
	const float k = 273.16;

	printf("c: %lf", 5.0 / 9.0 * (i - c));
	printf("\nk: %lf", i + k);
}

int main(void) {
	double temp;
	printf("Enter a Fahrenheit temperature(q to quit): ");
	while (scanf("%lf", &temp)) {
		Temperatures(temp);
		printf("\nEnter a Fahrenheit temperature(q to quit): ");
	}
	return 0;
}