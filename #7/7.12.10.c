/*
 * @Author: Julian Liu 
 * @Date: 2019-11-30 02:24:35 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-30 03:09:23
 */

#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

float fun(int t, float i) {
	if (i <= t)
		return i * 0.15;
	return t * 0.15 + (i - t) * 0.28;
}

char *kindsc[] = {
	"Single",
	"Head of household",
	"Married,Shared",
	"Married,dieorced"};

int kindsi[] = {
	17850, 23900, 29750, 14875};

int main() {
	int i;

	while (i != sizeof(kindsc) / sizeof(char *) + 1) {
		i = 0;
		for (; i < sizeof(kindsc) / sizeof(char *); i++) {
			if (!(i % 2) && i)
				putchar('\n');
			printf("%d) ", i);
			printf("%-*s", 15, kindsc[i]);
		}
		printf("\n%d) quit\n", i + 1);
		printf("Enter your choose...");
		scanf("%d", &i);
		if (i <= sizeof(kindsc) / sizeof(char *)) {
			float h = 0;
			printf("Enter your income...");
			scanf("%f", &h);
			printf("The tax is %0.3f\n\n", fun(kindsi[i], h));
		}
	}
	return 0;
}
