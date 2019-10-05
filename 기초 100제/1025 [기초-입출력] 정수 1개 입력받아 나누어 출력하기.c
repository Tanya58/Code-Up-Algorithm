#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
    scanf("%1d%1d%1d%1d%1d", num1, num2, num3, num4, num5);
    printf("%d\n", num1 * 10000);
    printf("%d\n", num2 * 1000);
    printf("%d\n", num3 * 100);
    printf("%d\n", num4 * 10);
    printf("%d\n", num5 * 1);
    return 0;
}