/*
 * @Author: Julian Liu 
 * @Date: 2019-11-22 22:07:54 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-22 22:22:02
 */

#include <stdio.h>

int main(void) {
	char c = 'A';
	for (int i = 0, n; i < 6; i++) {
		n = 0;
		do {
			printf("%c", c + n);
		} while (++n <= i);
		c += n;
		printf("\n");
	}
	return 0;
}