#include <stdio.h>

long long int n;

int sqrt(long long int a)
{
    double x = 1;
    for (int i = 0; i < 30; i++)
    {
        x = (x + (a / x)) / 2;
    }
    return x;
}

int main()
{
    scanf("%lld", &n);
    printf("%d\n", sqrt(n));
    return 0;
}