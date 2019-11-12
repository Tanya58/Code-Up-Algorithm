#include <stdio.h>

int main()
{
    int a = 0, b = 0, t = 0;
    scanf("%d\n%d", &a, &b);

    double result = a;
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &t);
        result *= (1 + (double)t / 100);
    }

    result -= a;
    printf("%.0f\n", result);
    printf("%s", result > 0 ? "good" : result < 0 ? "bad" : "same");

    return 0;
}