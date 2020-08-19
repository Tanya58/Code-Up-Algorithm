#include <stdio.h>

int map[7][7];
int visit[7][7];

int dfs(int x, int y, int k)
{
    if (x < 0 || y < 0 || x >= 7 || y >= 7 || visit[x][y] == 1 || map[x][y] != k)
    {
        return 0;
    }
    visit[x][y] = 1;
    return dfs(x, y - 1, k) + dfs(x, y + 1, k) + dfs(x - 1, y, k) + dfs(x + 1, y, k) + 1;
}

int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (visit[i][j] == 1)
            {
                continue;
            }
            cnt += dfs(i, j, map[i][j]) > 2 ? 1 : 0;
        }
    }
    printf("%d", cnt);

    return 0;
}