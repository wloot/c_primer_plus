/*
 * @Author: Julian Liu 
 * @Date: 2019-11-25 23:16:34 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-25 23:16:54
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	double d1[8];
	double d2[8];
	double dp;

	for (int i = 0; i < 8; i++) {
		printf("%d: ", i + 1);
		scanf("%lf", &d1[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		dp+=d1[i];
		d2[i]=dp;
	}
	for (int i = 0; i < 8; i++)
	{
		printf("%10.3lf ", d1[i]);
	}
	printf("\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%10.3lf ", d2[i]);
	}		
	

	return 0;
}
