#include <stdio.h>
#include <string.h>

int map[15][15];

int isBlock(int x, int y, int n)
{
    if ((x == 0 && y == 0) || (x == 0 && y == n - 1) || (x == n - 1 && y == 0) || (x == n - 1 && y == n - 1))
    {
        return 0;
    }
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            if ((i == 0 && j == 0) || x + i < 0 || y + j < 0 || x + i >= n || y + j >= n)
            {
                continue;
            }
            if (map[x + i][y + j] == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int extinguishFire(int x, int y, int n, int k)
{
    k /= 2;
    int cnt = 0;
    for (int i = -k; i <= k; i++)
    {
        for (int j = -k; j <= k; j++)
        {
            if (x + i < 0 || y + j < 0 || x + i >= n || y + j >= n)
            {
                continue;
            }
            if (map[x + i][y + j] == 1)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int k = 0;
    scanf("%d", &k);

    memset(map, 0, sizeof(map));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    int max = 0;
    int idx[2] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 1 || isBlock(i, j, n) == 1)
            {
                continue;
            }
            int cnt = extinguishFire(i, j, n, k);
            if (max < cnt)
            {
                max = cnt;
                idx[0] = i + 1;
                idx[1] = j + 1;
            }
        }
    }

    if (max)
    {
        printf("%d %d", idx[0], idx[1]);
    }
    else
    {
        printf("119");
    }

    return 0;
}