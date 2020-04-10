#include <stdio.h>

double ABS(double n)
{
    return n < 0 ? -n : n;
}

int main()
{
    double a = 0;
    scanf("%lf", &a);
    printf("%.10lg", ABS(a));
    return 0;
}