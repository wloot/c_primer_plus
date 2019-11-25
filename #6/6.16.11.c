/*
 * @Author: Julian Liu 
 * @Date: 2019-11-24 19:35:43 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-25 22:41:03
 */

#include <stdio.h>

int main(void) {
	int a[8];

	for (int i = 0; i < 8; i++) {
		printf("%d: ", i + 1);
		scanf("%d", a + i);
	}
	for (int i = 7; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	return 0;
}
