#include <stdio.h>

long long int n;

long long int abs(long long int a)
{
    return a < 0 ? -a : a;
}

int main()
{
    scanf("%lld", &n);
    printf("%lld\n", abs(n));
    return 0;
}