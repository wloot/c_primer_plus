/*
 * @Author: Julian Liu 
 * @Date: 2019-11-20 18:18:31 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-20 18:34:12
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n;
	printf("Enter days...");
	scanf("%d", &n);
	while (n > 0) {
		printf("%d days are %d weeks, %d days\n", n, n / 7, n % 7);
		printf("Enter days...");
		scanf("%d", &n);
	}
}
