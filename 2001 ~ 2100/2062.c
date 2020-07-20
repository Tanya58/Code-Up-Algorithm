#include <stdio.h>

int M, N;
int Map[20][20] = {0};
int Visited[20][20] = {0};

void init()
{
    scanf("%d %d", &M, &N);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &Map[i][j]);
        }
    }
}

int check(int x, int y, int k)
{
    if (x < 0 || y < 0 || x >= M || y >= N || Map[x][y] != k || Visited[x][y] == 1)
    {
        return 0;
    }

    Visited[x][y] = 1;

    int cnt = 1;
    cnt += check(x - 1, y, k);
    cnt += check(x + 1, y, k);
    cnt += check(x, y - 1, k);
    cnt += check(x, y + 1, k);
    return cnt;
}

int main()
{
    init();

    int max[21] = {0};
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (Map[i][j] == -1 || Visited[i][j] == 1)
            {
                continue;
            }
            int cnt = check(i, j, Map[i][j]);
            max[Map[i][j]] = max[Map[i][j]] < cnt ? cnt : max[Map[i][j]];
        }
    }
    for (int i = 0; i < 21; i++)
    {
        if (max[i])
        {
            printf("%d %d\n", i, max[i]);
        }
    }

    return 0;
}