/*
 * @Author: Julian Liu 
 * @Date: 2019-11-24 04:19:13 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-24 04:30:34
 */

#include <stdio.h>
#include <string.h>
int main(void) {
	char i[100];
	printf("Enter one word...");
	scanf("%s", i);
	for (int n = strlen(i) - 1; n >= 0; n--)
		printf("%c", i[n]);
}
