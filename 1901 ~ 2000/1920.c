#include <stdio.h>

void f(int k)
{
    if (k >> 1)
    {
        f(k >> 1);
    }
    printf("%d", k % 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    f(n);
    return 0;
}