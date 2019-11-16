/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 18:09:23 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 18:14:55
 */

#include <stdio.h>

void two(void) {
    printf("two\n");
}

void one_three(void) {
    printf("one\n");
    two();
    printf("three\n");
}

int main(void) {
    printf("starting now\n");
    one_three();
    printf("done!");

    return 0;
}
