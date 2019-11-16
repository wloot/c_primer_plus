/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 15:57:21 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 17:21:38
 */

#include <stdio.h>

int year_to_days(int age) {
    return age*12*30;
}

int main() {
    int my_age = 17;
    printf("%d, %d", my_age, year_to_days(my_age));

    return 0;
}