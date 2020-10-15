#include <stdio.h>

long long int fibonacci[21];

long long int fib(int k, int n)
{
    if (!fibonacci[n])
    {
        for (int i = 1; i <= k; i++)
        {
            fibonacci[n] += fib(k, n - i);
        }
    }
    return fibonacci[n];
}

int main()
{
    int k = 0, n = 0;
    scanf("%d %d", &k, &n);
    for (int i = 1; i <= k; i++)
    {
        scanf("%lld", &fibonacci[i]);
    }
    printf("%lld", fib(k, n));
    return 0;
}
