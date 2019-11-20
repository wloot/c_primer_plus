/*
 * @Author: Julian Liu 
 * @Date: 2019-11-20 18:05:42 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-20 18:07:00
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	int n;

	printf("Enter a int...");
	scanf("%d", &n);
	for (int i = 0; i <= 10; i++) {
		printf("%d\n", n + i);
	}
	return 0;
}
