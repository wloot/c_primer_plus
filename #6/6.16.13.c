/*
 * @Author: Julian Liu 
 * @Date: 2019-11-25 23:04:06 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-25 23:15:45
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	int ia[8], i = 0;

	for (; i < 8; i++) {
		ia[i] = (i ? ia[i - 1] : 1) * 2;
	}
	i--;
	do {
		printf("%d ", ia[i]);

	} while (--i >=0);

	return 0;
}
