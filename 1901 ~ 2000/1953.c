#include <stdio.h>

void triangle_j(int n)
{
    if (n > 0)
    {
        triangle_j(n - 1);
        printf("*");
    }
}

void triangle_i(int n)
{
    if (n > 0)
    {
        triangle_i(n - 1);
        triangle_j(n);
        printf("\n");
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    triangle_i(n);
    return 0;
}