#include <stdio.h>

void f(int k)
{
    if (k > 0)
    {
        printf("%d\n", k);
        f(k - 1);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    f(n);
    return 0;
}