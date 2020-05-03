#include <stdio.h>

int n;

void f(int k)
{
    if (k < 0 || k > n)
    {
        return;
    }
    printf("%d ", k);
    f(k + 1);
}

int main()
{
    scanf("%d", &n);
    f(1);
    return 0;
}