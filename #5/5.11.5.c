/*
 * @Author: Julian Liu 
 * @Date: 2019-11-20 19:00:37 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-20 19:04:55
 */

#include <stdio.h>

int main(void) {
	int count, sum;
	int n;

	printf("Enter days...");
	scanf("%d", &n);
	count = 0;
	sum = 0;
	while (count++ < n)
		sum += count;
	printf("sum = %d", sum);

	return 0;
}
