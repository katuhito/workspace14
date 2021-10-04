#include <stdio.h>

int main()
{
    int m[2][3];
    m[0][0] = 1;
    m[0][1] = 2;
    m[0][2] = 3;
    m[0][0] = 4;
    m[0][1] = 5;
    m[0][2] = 6;

    int r = 0;
    do {
        int c = 0;
        while(c < 3){
            printf("%i\n", m[r][c++]);
        }
    } while (++r < 2);
}