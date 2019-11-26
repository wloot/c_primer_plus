/*
 * @Author: Julian Liu 
 * @Date: 2019-11-27 03:18:31 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-27 03:23:07
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	char c;

	while ((c = getchar()) != '#') {
		if (c == '.')
			putchar('!');
		else if (c == '!') {
			putchar('!');
			putchar('!');
		} else
			putchar(c);
	}
	return 0;
}
