/*
 * @Author: Julian Liu 
 * @Date: 2019-11-28 14:44:42 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-28 14:47:47
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	char c;

	while ((c = getchar()) != '#') {
		switch (c) {
		case '.':
			putchar('!');
			break;
		case '!':
			putchar('!');
			putchar('!');
			break;
		default:
			putchar(c);
			break;
		}
	}
	return 0;
}
