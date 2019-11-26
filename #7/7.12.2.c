/*
 * @Author: Julian Liu 
 * @Date: 2019-11-27 02:43:02 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-27 02:52:06
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	char c[256];
	int nc = -1;

	while (++nc < 256 && (c[nc] = getchar()) != '#')
		;
	for (int i = 0; i < nc; i++) {
		if (!(i % 8))
			printf("\n");
		printf("%c-%d ", c[i], c[i]);
	}
	return 0;
}
