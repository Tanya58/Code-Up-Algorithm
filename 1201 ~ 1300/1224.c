#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    float ab = (float)a / b;
    float cd = (float)c / d;

    printf("%s", ab > cd ? ">" : ab == cd ? "=" : "<");

    return 0;
}