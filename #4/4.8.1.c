/*
 * @Author: Julian Liu 
 * @Date: 2019-11-18 17:36:40 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-18 17:41:05
 */

#include <stdio.h>

int main(void) {
    char first_name[15];
    char last_name[15];

    printf("Enter your full name here...");
    scanf("%s %s", first_name, last_name);
    getchar();
    printf("%s,%s", first_name, last_name);

    return 0;
}
