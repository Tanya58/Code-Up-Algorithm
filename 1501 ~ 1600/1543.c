#include <stdio.h>

int n;

void f(int a)
{
    for (int i = 0; i < a; i++)
    {
        puts("love");
    }
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}