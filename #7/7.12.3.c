/*
 * @Author: Julian Liu 
 * @Date: 2019-11-27 02:53:26 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-27 03:18:10
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	int i[256];
	int n_i = -1;
	int n_odd = 0;
	int sum_odd = 0;
	int sum_i = 0;

	while (++n_i < 256 && scanf("%d", &i[n_i]) == 1) {
		if (!i[n_i])
			break;
		else if (i[n_i] % 2) {
			n_odd++;
			sum_odd += i[n_i];
		}
		sum_i += i[n_i];
	}
	printf("the average of even numvers of %d is %f", n_i - n_odd, (n_i - n_odd) ? (float)(sum_i - sum_odd) / (n_i - n_odd) : 0.0);
	printf(", and the average of odd numvers of %d is %f", n_odd, n_odd ? (float)sum_odd / n_odd : 0.0);
	return 0;
}
