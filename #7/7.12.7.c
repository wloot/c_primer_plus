/*
 * @Author: Julian Liu 
 * @Date: 2019-11-28 14:56:09 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-28 16:54:34
 */

#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

int main(int argc, char const *argv[]) {
	float t;
	float tax = 0;

	printf("Enter hours...");
	scanf("%f", &t);
	if (t > 40)
		t += (t - 40) * 1.5;
	tax += min(30, t) * 0.15 * 10;
	if (t > 30) {
		tax += min(15, t - 30) * 0.2 * 10;
		tax += max(0, t - 45) * 0.25 * 10;
	}
	printf("%0.3f", t * 10 - tax);
	return 0;
}
