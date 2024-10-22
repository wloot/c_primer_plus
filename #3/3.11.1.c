/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 18:18:23 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 18:27:58
 */

#include <stdio.h>

int main(void) {
	int i = __INT_MAX__;
	float f = __FLT_MAX__;

	printf("%d\n", i);
	i++;
	printf("%d\n", i);

	printf("%f\n", f);
	f += 0.1f;
	printf("%f\n", f);

	f = __FLT_MIN__;
	printf("%0.50f\n", f);
	f += 1.0f;
	printf("%0.50f\n", f);

	return 0;
}
