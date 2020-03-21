#include <stdio.h>

int n;

long long int f(int a)
{
    long long int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    scanf("%d", &n);
    printf("%lld\n", f(n));
}