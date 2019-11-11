#include <stdio.h>

int main()
{
    int a = 0, b = 0, sum = 0;
    scanf("%d %d", &a, &b);
    for (; a <= b; a++)
    {
        printf("%c%d", a & 1 ? '+' : '-', a);
        sum += a & 1 ? a : -a;
    }
    printf("=%d", sum);
    return 0;
}