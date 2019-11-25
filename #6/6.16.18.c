/*
 * @Author: Julian Liu 
 * @Date: 2019-11-26 07:11:02 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-26 07:18:36
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	int fnds = 5, yrs = 0;

	printf("%d\n", fnds);
	while ((fnds - yrs - 1) * 2 <= 150) {
		yrs++;
		fnds = (fnds - yrs) * 2;
		printf("%d\n", fnds);
	}
	return 0;
}

