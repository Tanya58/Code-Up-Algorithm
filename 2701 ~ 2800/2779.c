#include <stdio.h>
#include <string.h>

void dfs(int map[10][10], int x, int y)
{
    if (x < 0 || y < 0 || x > 9 || y > 9 || map[x][y] == 0)
    {
        return;
    }
    map[x][y] = 0;
    dfs(map, x - 1, y);
    dfs(map, x + 1, y);
    dfs(map, x, y - 1);
    dfs(map, x, y + 1);
}

int check(int map[10][10])
{
    int chk[10][10] = {0};
    memcpy(chk, map, sizeof(chk));

    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (chk[i][j] == 1)
            {
                cnt++;
                dfs(chk, i, j);
            }
        }
    }
    return cnt;
}

int main()
{
    int map[10][10] = {0};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }
    printf("%d", check(map));
    return 0;
}