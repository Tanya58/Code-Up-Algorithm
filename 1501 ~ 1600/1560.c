#include <stdio.h>

long long int n, m;

long long int f(long long int a, long long int b)
{
    long long int diff = a - b;
    return diff < 0 ? -diff : diff;
}

int main()
{
    scanf("%lld%lld", &n, &m);
    printf("%lld\n", f(n, m));
}