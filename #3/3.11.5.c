/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 22:18:52 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 22:25:43
 */

#include <stdio.h>

int main(void) {
    int year = 3.156e+07;
    int ages = 1;
    
    printf("Enter your ages here...");
    scanf("%d", &ages);
    getchar();
    printf("Oh.. You have borned %d secs!", year*ages);

    return 0;
}
