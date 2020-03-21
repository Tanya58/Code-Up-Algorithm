#include <stdio.h>

int n;

long long int f(int a)
{
    long long int fact = 1;
    for (int i = a; i > 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    scanf("%d", &n);
    printf("%lld\n", f(n));
}