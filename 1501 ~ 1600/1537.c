#include <stdio.h>

int n;

void f(int a)
{
    if (a == 1)
    {
        puts("hello");
    }
    else if (a == 2)
    {
        puts("world");
    }
    else
    {
        puts("");
    }
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}