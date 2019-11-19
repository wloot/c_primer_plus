/*
 * @Author: Julian Liu 
 * @Date: 2019-11-19 11:11:43 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-19 11:24:49
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char first_name[15];
    char last_name[15];
    int len_f, len_l;

    printf("Enter your first name...");
    scanf("%s", first_name);
    getchar();
    printf("Well, now enter your last name...");
    scanf("%s", last_name);
    len_f = (int)strlen(first_name);
    len_l = (int)strlen(last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", len_f, len_f, len_l, len_l);
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", len_f, len_f, len_l, len_l);

    return 0;
}
