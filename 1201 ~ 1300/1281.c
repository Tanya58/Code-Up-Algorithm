#include <stdio.h>

int main()
{
    int a = 0, b = 0, sum = 0;
    scanf("%d %d", &a, &b);
    printf("%d", a & 1 ? a : -a);
    sum += a & 1 ? a : -a;
    a++;
    for (; a <= b; a++)
    {
        if (a & 1)
            putchar('+');
        printf("%d", a & 1 ? a : -a);
        sum += a & 1 ? a : -a;
    }
    printf("%s%d", sum > 0 ? "=+" : "=", sum);
    return 0;
}