#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    for (int i = n; i > 0; i--)
    {
        for (int j = m; j > 0; j--)
        {
            printf("%d ", i % 2 ? m * i - j + 1 : m * (i - 1) + j);
        }
        printf("\n");
    }

    return 0;
}