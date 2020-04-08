#include <stdio.h>

float circle(int k)
{
    return k * k * 3.14F;
}

main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}