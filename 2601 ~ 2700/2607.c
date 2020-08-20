#include <stdio.h>
#include <string.h>

// 에라토스테네스의 체(Sieve of Eratosthenes) : 소수를 구하기 위한 알고리즘

char sieve[4000001];
void makeDecimal()
{
    for (int i = 2; i < sizeof(sieve) / 2; i++)
    {
        for (int j = 2; i * j < sizeof(sieve); j++)
        {
            sieve[i * j] = 0;
        }
    }
}

int main()
{
    int start = 0, end = 0;
    scanf("%d %d", &start, &end);

    memset(sieve, 1, sizeof(sieve));
    makeDecimal();

    for (int i = start; i + 2 <= end; i++)
    {
        if (sieve[i] && sieve[i + 2])
        {
            printf("%d %d\n", i, i + 2);
        }
    }

    return 0;
}