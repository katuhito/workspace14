#include <stdio.h>

int main()
{
    char a[] = "This is a string.";
    int len = 0;
    for (int i = 0; a[i]; i++) {
        len++;
    }
    printf("%d\n", len);
}