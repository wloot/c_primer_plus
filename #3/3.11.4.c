/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 21:42:49 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 22:04:38
 */

#include <stdio.h>

int main(void) {
    float input = 0.0;

    printf("Enter a floating-point value:");
    scanf("%f", &input);
    getchar();
    printf("fixed-point notation:%f\n", input);
    printf("exponential notation:%e\n", input);
    printf("p notation:%a\n", input);

    return 0;
}