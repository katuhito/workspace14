#include <stdio.h>
// #include <uchar.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "ja_JP.utf-8");
    wchar_t a = L'あ';
    // char16_t a0 = u'あ';
    // char32_t a1 = U'あ';
    printf("%c\n", a);
}
