#include <stdio.h>

double x;

double f(double a)
{
    return a - (long long int)a;
}

int main()
{
    scanf("%lf", &x);
    printf("%.14lf\n", f(x));
}