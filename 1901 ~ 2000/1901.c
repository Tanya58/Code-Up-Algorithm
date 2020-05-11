#include <stdio.h>

void f(int k)
{
    if (k > 0)
    {
        f(k - 1);
        printf("%d\n", k);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    f(n);
    return 0;
}