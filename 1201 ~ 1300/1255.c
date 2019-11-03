#include <stdio.h>

int main()
{
    double a = 0, b = 0;
    scanf("%lf %lf", &a, &b);
    for (double i = a; i <= b; i = i + 0.01)
    {
        printf("%.2lf ", i);
    }
    return 0;
}
