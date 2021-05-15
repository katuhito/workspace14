#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int32_t i32 = -10;
    int16_t i16 = i32; //32ビットの-10を16ビット符号つき整数に代入
    uint16_t u16 = i32; //32ビットの-10を16ビット符号なし整数に代入
    i32 = i16;
    printf("%d\n", i32);
    i32 = u16;
    printf("%d\n", i32);
}