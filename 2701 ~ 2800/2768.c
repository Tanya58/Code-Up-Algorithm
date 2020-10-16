#include <stdio.h>

long long int fibonacci[100001];

long long int fib(int k, int n)
{
    if (!fibonacci[n])
    {
        if (n > k + 1)
        {
            fibonacci[n] = 2 * fib(k, n - 1) - fib(k, n - 1 - k) + 100007;
            fibonacci[n] %= 100007;
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                fibonacci[n] += fib(k, n - i);
                fibonacci[n] %= 100007;
            }
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