/*
 * @Author: Julian Liu 
 * @Date: 2019-11-17 01:22:07 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-17 01:28:56
 */

#include <stdio.h>

int main(void) {
    int bei = 0;

    printf("Enter num od bei...");
    scanf("%d", &bei);
    getchar();

    printf("pintuo: %.3f\n", (float)bei/2);
    printf("angsi: %d\n", bei*8);
    printf("datangshao: %d\n", bei*16);
    printf("chashao: %d\n", bei*16*3);
    
    return 0;
}
