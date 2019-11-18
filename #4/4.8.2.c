/*
 * @Author: Julian Liu 
 * @Date: 2019-11-18 17:41:57 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-18 18:04:46
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char name[15];

    printf("Enter your first name here...");
    scanf("%s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("%*s", (int)strlen(name) + 3, name);
}
