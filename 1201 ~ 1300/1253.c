#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    for (int i = min; i <= max; i++)
    {
        printf("%d ", i);
    }
    return 0;
}