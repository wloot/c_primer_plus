/*
 * @Author: Julian Liu 
 * @Date: 2019-11-25 22:27:55 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-25 22:55:00
 */

#include <stdio.h>
#include <windows.h>

// cnmd中文翻译
int main(int argc, char const *argv[]) {
	int l = 0;
	double r1 = 0.0;
	double r2 = 0.0;

	printf("Enter items...");
	scanf("%u", &l);
	while (l > 0) {
		while (l) {
			r1 += 1.0 / l;
			r2 += (l % 2 ? 1 : -1) * 1.0 / l;
			l--;
		}
		printf("Result: %lf %lf\n", r1, r2);
		printf("Enter next items...");
		scanf("%u", &l);
	}
	return 0;
}
