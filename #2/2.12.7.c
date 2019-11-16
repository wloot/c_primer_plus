/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 17:44:15 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 18:15:04
 */

#include <stdio.h>

void plz_smile(void) {
    printf("Smile!");
}

int main(void) {
    int ntop = 3;

    for (int i = 1; i <= ntop; i++) {
        plz_smile();
        if (i == ntop) {
            if (ntop != 1) printf("\n");
            i = 0;
            ntop--;
        }
    }
}
