#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", i % 2 ? 2 * n * (i + 1) / 2 - j : n * i + 1 + j);
        }
        printf("\n");
    }
    return 0;
}