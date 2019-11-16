/*
 * @Author: Julian Liu 
 * @Date: 2019-11-16 15:14:39 
 * @Last Modified by: Julian Liu
 * @Last Modified time: 2019-11-16 17:52:12
 */


#include <stdio.h>
#include <windows.h>

int bin_to_int(char bin[]) {
    int out = 0;
    
    if (strlen(bin) > sizeof(int)*8)
        return ERROR;

    for (int i = strlen(bin)-1; i >= 0; i--) {
        if (bin[i] == '1') {
            printf("%d, %d\n", bin[i] - '0', i);
            out += bin[i] - '0' << i-1;
        }
    }
    return out;
}

int main()
{
    char pbin[] = "0111";
    printf("%d", bin_to_int(pbin));
}

