#include <stdio.h>
#include <math.h>

int isDecimal(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (isDecimal(i) == 0)
            continue;
        if (isDecimal((double)n / i))
        {
            printf("%d %d", i, n / i);
            return 0;
        }
    }
    puts("wrong number");
    return 0;
}