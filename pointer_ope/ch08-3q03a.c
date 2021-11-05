#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t x = 0x01234567;
    uint8_t *p = (uint8_t *)&x;
    if (*p == 0x01) {
        puts("ビッグエンディアンです");
    } else {
        puts("リトルエンディアンです");
    }
}