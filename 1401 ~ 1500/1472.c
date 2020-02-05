#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", i % 2 ? m * i - j : m * (i - 1) + j + 1);
        }
        printf("\n");
    }

    return 0;
}