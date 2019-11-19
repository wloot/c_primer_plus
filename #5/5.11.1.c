/*
 * @Author: Julian Liu 
 * @Date: 2019-11-19 14:04:30 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-19 14:13:01
 */

#include <stdio.h>
#define sixty 60

int main(int argc, char const *argv[]) {
    int min;
    printf("Enter time in Minutes...");
    scanf("%d", &min);
    while (min != 0) {
	printf("%d:%d", min / sixty, min % sixty);
	printf("\nEnter time in Minutes...");
	scanf("%d", &min);
    }

    return 0;
}
