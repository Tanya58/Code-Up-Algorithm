#include <stdio.h>

float Max(float a, float b)
{
    return a > b ? a : b;
}

int main()
{
    float a = 0, b = 0;
    scanf("%f %f", &a, &b);

    float max = a + b;
    max = Max(max, a - b);
    max = Max(max, b - a);
    max = Max(max, a * b);
    max = Max(max, a / b);
    max = Max(max, b / a);

    float pow = 1;
    for (int i = 0; i < b; i++)
    {
        pow *= a;
    }
    max = Max(max, pow);
    pow = 1;
    for (int i = 0; i < a; i++)
    {
        pow *= b;
    }
    max = Max(max, pow);

    printf("%.6f", max);
    return 0;
}