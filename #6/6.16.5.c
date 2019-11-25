/*
 * @Author: Julian Liu 
 * @Date: 2019-11-24 03:09:12 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-25 22:40:57
 */

#include <stdio.h>

int main(void) {
	char i;
	int n;
	printf("Enter a char...");
	scanf("%c", &i);
	n = i - 'A';

	for (int a = 0; a <= n; a++) {
		int b = n - a;
		while (b) {
			printf(" ");
			b--;
		}
		for (int c = 0; c <= a; c++) {
			printf("%c", 'A' + c);
		}
		for (int d = a - 1; d >= 0; d--) {
			printf("%c", 'A' + d);
		}
		printf("\n");
	}
	return 0;
}
