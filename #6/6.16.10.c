/*
 * @Author: Julian Liu 
 * @Date: 2019-11-24 12:01:47 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-25 22:40:36
 */

#include <stdio.h>

int main(void) {
	int l, u;
	printf("Enter lower and upper integer limits: ");
	while (scanf("%d %d", &l, &u) == 2 && l != u) {
		int i = 0;
		printf("The sums of the squares from %d to %d is ",l*l,u*u);
		while (l <= u) {
			i += l*l;
			l++;
		}
		printf("%d\n", i);
		printf("Enter lower and upper integer limits: ");
	}
	return 0;
}
