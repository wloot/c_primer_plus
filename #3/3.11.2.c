/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 21:28:20 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 21:34:00
 */

#include <stdio.h>

int main(void) {
    int asscii_id;

    printf("Input a ASSCII ID here...");
    scanf("%d", &asscii_id);
    printf("\n%c", (char)asscii_id);

    return 0;
}
