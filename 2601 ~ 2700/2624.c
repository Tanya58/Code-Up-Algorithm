#include <stdio.h>

int isPrime(int k)
{
    for (int i = 2; i <= k / 2; i++)
    {
        if (k % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}