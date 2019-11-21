/*
 * @Author: Julian Liu 
 * @Date: 2019-11-21 14:59:39 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-21 15:08:22
 */

#include <stdio.h>

int main(void) {
	int f, s;

	printf("This program computes moduli.\nEnter an integer to serve as the second operand: ");
	scanf("%d", &s);
	printf("Now enter the first oprand: ");
	scanf("%d", &f);
	while (f > 0) {
		printf("%d %% %d is %d\n", f, s, f % s);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%d", &f);
	}
	printf("Done");
	return 0;
}