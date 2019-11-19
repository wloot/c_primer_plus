/*
 * @Author: Julian Liu 
 * @Date: 2019-11-19 13:49:01 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-19 14:02:51
 */

#include <stdio.h>
#define gallons_to_liters (3.785)
#define miles_to_km (1.609)

int main(int argc, char const *argv[]) {
    float m, c;
    printf("Enter Miles and Fuel consumption...");
    scanf("%f %f", &m, &c);
    printf("%0.1f\n", c / m);
    m *= miles_to_km;
    c *= gallons_to_liters;
    printf("%0.1f", c / m);
    return 0;
}
