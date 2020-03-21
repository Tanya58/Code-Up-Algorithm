#include <stdio.h>

double x;

long long int f(double a)
{
    long long int t = a;
    return a - t < 0 ? t - 1 : t;
}

int main()
{
    scanf("%lf", &x);
    printf("%lld\n", f(x));
}