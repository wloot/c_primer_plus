/*
 * @Author: Julian Liu 
 * @Date: 2019-11-19 11:23:55 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-19 13:59:38
 */

#include <float.h>
#include <stdio.h>

int main(void) {
    double d = 1.0 / 3.0;
    float f = 1.0 / 3.0;

    printf("d= %0.6f %0.12f %0.16f\n", d, d, d);
    printf("f= %0.6f %0.12f %0.16f\n", f, f, f);
    printf("FLT_DIG= %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
    return 0;
}
