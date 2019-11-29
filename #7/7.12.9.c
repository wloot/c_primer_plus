/*
 * @Author: Julian Liu 
 * @Date: 2019-11-30 02:06:50 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-30 02:17:53
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i;
	printf("Enter a number...");
	scanf("%d", &i);
	while (i > 1) {
		int is_prime = 1;
		for (int n = 2; n < i; n++) {
			if (!(i % n))
				is_prime = 0;
		}
		if (is_prime)
			printf("%d ", i);
		i--;
	}
}
