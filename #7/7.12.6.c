/*
 * @Author: Julian Liu 
 * @Date: 2019-11-28 14:48:09 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-28 14:54:59
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	char pc = 0, cc;
	int i = 0;

	while ((cc = getchar()) != '#') {
		if (pc == 'e' && cc == 'i')
			i++;
		pc = cc;
	}
	printf("%d", i);
}