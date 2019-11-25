/*
 * @Author: Julian Liu 
 * @Date: 2019-11-26 06:57:28 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-26 07:03:00
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	int p1 = 100;
	float p2 = 100.0;
	int yrs = 0;

	while (p2 <= p1) {
		yrs++;
		p1 += 100 * 0.1;
		p2 += p2 * 0.05;
	}
	printf("%d", yrs);
	return 0;
}
