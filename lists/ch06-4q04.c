#include <stdio.h>

int main()
{
    int lf = 0;
    do {
        int ch = getchar();
        printf("%c", ch);
        if (ch == '\n') {
            lf++;
        }
    } while (lf < 3);
}