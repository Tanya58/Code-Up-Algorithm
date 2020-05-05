#include <stdio.h>

int f(long long int k)
{
    return k > 0 ? k % 10 + f(k / 10) : 0;
}

int main()
{
    long long int n = 0;
    scanf("%lld", &n);

    printf("%d", f(n));

    return 0;
}