/*
 * @Author: Julian Liu 
 * @Date: 2019-11-22 21:14:23 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-22 21:18:50
 */

#include <stdio.h>

int main(void) {
	char abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
					'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for (int i = 0; i < 26; i++) {
		printf("%c", abc[i]);
	}
	return 0;
}
