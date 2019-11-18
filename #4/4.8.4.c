/*
 * @Author: Julian Liu 
 * @Date: 2019-11-18 18:19:19 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-18 18:42:54
 */

#include <stdio.h>

int main(void) {
    int i = 0;

    printf("Enter your height in CM...");
    scanf("%d", &i);
    printf("%0.3f", (float)i / 100);

    return 0;
}
