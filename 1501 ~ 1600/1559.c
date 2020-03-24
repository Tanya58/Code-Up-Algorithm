#include <stdio.h>

int n, m;

long long int f(int n, int m)
{
    return (long long int)n + m;
}

int main()
{
    scanf("%d%d", &n, &m);
    printf("%lld\n", f(n, m));
}