/*
 * @Author: Julian Liu 
 * @Date: 2019-11-27 02:30:25 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-27 02:41:57
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {
	char ch;
	int ns = 0, nb = 0, no = 0;
	while ((ch = getchar()) != '#') {
		if (ch == ' ')
			ns++;
		else if (ch == '\n')
			nb++;
		else
			no++;
	}
	printf("number of space: %d, number of break: %d, number of others: %d", ns, nb, no);
	return 0;
}
