/*
 * @Author: Julian Liu 
 * @Date: 2019-11-20 18:22:38 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-20 19:00:02
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	float height;
	printf("Ener a height in CM:");
	scanf("%f", &height);
	while (height > 0) {
		int feets = height * 0.0328;
		printf("%0.1f cm = %d feet, %0.1f inches\n", height, feets, (height - feets * 30.48) * 0.3937);
		printf("Ener a height in CM:");
		scanf("%f", &height);
	}
}
