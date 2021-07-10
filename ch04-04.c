#include <stdio.h>
#include <stdbool.h>

bool test1()
{
    puts("test1");
    return true;
}

bool test2()
{
    puts("test2");
    return false;
}

bool test3()
{
    puts("test3");
    return true;
}

int main()
{
    if (test1() && test2() && test3()) {
        puts("all true");
    }
    if (test1() || test2() || test3()) {
        puts("include true");
    }
}