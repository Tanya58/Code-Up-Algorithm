#include <stdio.h>
#include <math.h>

int isPerfetNumber(int n)
{
    int sum = -n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i + n / i;
        }
    }
    return n == sum ? 1 : 0;
}

int main()
{
    int n[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", isPerfetNumber(n[i]) ? "yes" : "no");
    }
    return 0;
}