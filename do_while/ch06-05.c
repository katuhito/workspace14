#include <stdio.h>

int main()
{
    int ch = '\n';
    do {
        if (ch == '\n') {
            puts("it's OK? (Y/N)");
        }
        ch = getchar();
    } while (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N');
    if (ch == 'y' || ch == 'Y') {
        puts("Yes!");
    } else {
        puts("No!");
    }
}