#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "ja_JP.utf-8");
    for(wchar_t c = L'な'; c <= L'の'; c++) {
        printf("%lc\n", c);
    }
}