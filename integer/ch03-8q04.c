#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t x = -10;
    uint16_t y = x;
    printf("%d, %d\n", x, y);
}