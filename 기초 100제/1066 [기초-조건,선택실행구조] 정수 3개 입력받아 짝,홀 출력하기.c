#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    if (b % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    if (c % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    return 0;
}
