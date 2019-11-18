/*
 * @Author: Julian Liu 
 * @Date: 2019-11-18 17:58:04 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-18 18:00:01
 */

#include <stdio.h>

int main(void) {
    float i;

    printf("Enter a float num...");
    scanf("%f", &i);

    printf("The input is %0.1f or %0.1e", i, i);
    printf("\nThe input is %+0.3f or %0.3E", i, i);

    return 0;
}
