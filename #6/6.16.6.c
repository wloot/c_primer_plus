/*
 * @Author: Julian Liu 
 * @Date: 2019-11-24 03:50:15 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-24 04:18:57
 */

#include <stdio.h>

int main(void) {
	int up, low;
	printf("Enter up and low limit of the number...");
	scanf("%d %d", &up, &low);

	for (; low <= up; low++)
		printf("%8d %10d %15d\n", low, low*low, low*low*low);
}
