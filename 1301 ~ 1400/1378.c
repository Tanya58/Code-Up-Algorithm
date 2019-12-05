#include <stdio.h>

int main()
{
    int n = 0, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i * (i + 1) / 2;
    }
    printf("%d", sum);

    return 0;
}