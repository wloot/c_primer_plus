/*
 * @Author: Julian Liu 
 * @Date: 2019-11-26 03:12:37 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-26 05:01:33
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	char ic[256];
	int i = 0;

	printf("Enter one string...");
	for (; i < 255; i++) {
		scanf("%c", &ic[i]);
		if (ic[i] == '\n') {
			i--;
			break;
		}
	}
	while (i >= 0) {
		printf("%c", ic[i]);
		i--;
	}
	return 0;
}
