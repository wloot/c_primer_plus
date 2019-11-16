/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 17:27:25 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 17:34:18
 */

#include <stdio.h>

void br(void) {
    printf("Brazil, Russia");
}

void ic(void) {
    printf("India, China");
}

int main(void) {
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();

    return 0;
}