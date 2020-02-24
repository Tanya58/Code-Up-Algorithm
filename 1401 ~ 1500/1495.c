#include <stdio.h>

int d[1001][1001] = {0};
int sum[1001] = {0};
int main()
{
    int n = 0, m = 0, k = 0;
    scanf("%d %d %d", &n, &m, &k);

    int u = 0;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    for (int i = 0; i < k; i++)
    {
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);

        d[x1][y1] += +u;
        d[x2 + 1][y2 + 1] += u;

        d[x1][y2 + 1] -= u;
        d[x2 + 1][y1] -= u;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        for (int j = 0; j < m; j++)
        {
            tmp += d[i][j];
            sum[j] += tmp;
            printf("%d ", sum[j]);
        }
        printf("\n");
    }

    return 0;
}