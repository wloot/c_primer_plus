/*
 * @Author: Julian Liu 
 * @Date: 2019-11-28 16:16:52 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-28 17:25:27
 */

#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

float fun(float t, float r) {
	float tax = 0, p;

	if (t > 40)
		t += (t - 40) * 1.5;
	p = t * r;
	tax += min(300, p) * 0.15;
	if (p > 300) {
		tax += min(150, p - 300) * 0.2;
		tax += max(0, p - 450) * 0.25;
	}
	return p - tax;
}

char *prc[] = {
	"$8.75/hr",
	"$9.23/hr",
	"$10.00/hr",
	"$11.20/hr"};

float pci[] = {
	8.75, 9.23, 10.00, 11.20};

int main(int argc, char const *argv[]) {
	int i;

	while (i != sizeof(prc) / sizeof(char *) + 1) {
		i = 0;
		printf("\nEnter the number corresponding to the desired pay rate or action");
		for (; i < sizeof(prc) / sizeof(char *); i++) {
			if (!(i % 2))
				putchar('\n');
			printf("%d) ", i);
			printf("%-*s", 15, prc[i]);
		}
		printf("\n%d) quit     ", i + 1);
		scanf("%d", &i);
		if (i <= sizeof(prc) / sizeof(char *)) {
			float h = 0;
			printf("Enter hours...");
			scanf("%f", &h);
			printf("Your salary is %0.3f\n", fun(h, pci[i]));
		} else if (i != 1 + sizeof(prc) / sizeof(char *)) {
			printf("Fuck you\n");
		}
	}
	return 0;
}
