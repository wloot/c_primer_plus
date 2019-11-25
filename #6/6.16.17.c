/*
 * @Author: Julian Liu 
 * @Date: 2019-11-26 07:03:41 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-26 07:14:36
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	int yrs = 0;
	float mill = 100.0;

	while (mill * 1.08 - 10.0 >= 0) {
		yrs += 1;
		mill *= 1.08;
		mill -= 10.0;
	}
	printf("%d", yrs);
	return 0;
}
