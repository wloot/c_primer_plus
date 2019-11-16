/*
 * @Author: Julian Liu 
 * @Date: 2019-11-17 01:14:20 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-17 01:21:37
 */

#include <stdio.h>

int main(void) {
    float Height = 0;

    printf("Enter your Height in Inches...");
    scanf("%f", &Height);
    getchar();
    printf("To CM: %f", Height*2.54);

    return 0;
}