#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);

    double disc = b * b - 4 * a * c; // discriminant

    double x1 = -b / 2 / a;
    double x2 = disc > 0 ? sqrt(disc) / 2 / a : sqrt(-disc) / 2 / a;

    if (disc < 0)
    {
        x2 = x2 > 0 ? x2 : -x2;
        printf("%.2lf+%.2lfi\n", x1, x2);
        printf("%.2lf-%.2lfi\n", x1, x2);
    }
    else if (x2)
    {
        printf("%.2lf\n", x1 + x2);
        printf("%.2lf\n", x1 - x2);
    }
    else
    {
        printf("%.2lf\n", x1 == 0 ? 0 : x1);
    }

    return 0;
}