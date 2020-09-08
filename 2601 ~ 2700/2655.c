#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    printf("%.4f", -b / (float)a);

    return 0;
}