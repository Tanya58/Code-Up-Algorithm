#include <stdio.h>

int a, n;

long long int pow(int p, int q)
{
    if (p == 1)
    {
        return p;
    }

    long long int t = 1;
    for (int i = 0; i < q; i++)
    {
        t *= p;
    }
    return t;
}

int main()
{
    scanf("%d%d", &a, &n);
    printf("%lld\n", pow(a, n));
}