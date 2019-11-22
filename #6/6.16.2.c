/*
 * @Author: Julian Liu 
 * @Date: 2019-11-22 21:22:21 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-22 21:37:15
 */

#include <stdio.h>

int main(void) {
	for (int i = 0, n; i < 5; i++) {
		n = i;
		do {
			printf("$");
		} while (n-- > 0);
		printf("\n");
	}
}
