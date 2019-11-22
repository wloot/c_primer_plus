/*
 * @Author: Julian Liu 
 * @Date: 2019-11-22 21:37:28 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-22 22:22:03
 */

#include <stdio.h>

int main(void) {
	char fff = 'F';
	for (int i = 0, n; i < 6; i++) {
		n = 0;
		do {
			printf("%c", fff - n);
		} while (++n <= i);
		printf("\n");
	}
	return 0;
}