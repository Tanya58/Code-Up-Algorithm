#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = m; j > 0; j--)
        {
            printf("%d ", (j % 2 ? n * (j - 1) + 1 + i : n * j - i));
        }
        printf("\n");
    }

    return 0;
}