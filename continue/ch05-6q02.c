#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t result16 = 1;
    for(int i = 2;; i++){
        if(result16 * i > INT16_MAX) {
            printf("16bit = %i, last multipiler = %i\n", result16, i -1);
            break;
        }
        result16 *= i;
    }
    int64_t result32 = 1;
    for(int i = 2;; i++){
        if(result32 * i > INT32_MAX){
            printf("32bit = %li, last multiplier = %i\n", result32, i - 1);
            break;
        }
        result32 *= i;
    }
}