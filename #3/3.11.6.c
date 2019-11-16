/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 22:26:08 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 22:34:03
 */

#include <stdio.h>

int main(void) {
    double h2o = 3.0e-23;
    int kuatuo_h2o = 950;
    int i = 1;

    printf("Enter the kuatuo of water you have...");
    scanf("%d", &i);
    printf("You have %e water molecules!", i*kuatuo_h2o/h2o);

    return 0;
}

