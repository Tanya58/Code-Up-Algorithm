#include <stdio.h>

int N;
int map[1000][1000];

int f(int x, int y, int d)
{
    if (x < 0 || y < 0 || x >= N || y >= N)
    {
        return 0;
    }
    int cnt = 0;
    switch (map[y][x])
    {
    case 0:
        cnt += d ? 1 : 0;
        cnt += !d || d == 1 ? f(x, y - 1, 1) : 0;
        cnt += !d || d == 2 ? f(x, y + 1, 2) : 0;
        cnt += !d || d == 3 ? f(x + 1, y, 3) : 0;
        cnt += !d || d == 4 ? f(x - 1, y, 4) : 0;
        break;
    case 1:
        break;
    case 2:
        cnt += !d || d != 2 ? f(x, y - 1, 1) : 0;
        cnt += !d || d != 1 ? f(x, y + 1, 2) : 0;
        cnt += !d || d != 4 ? f(x + 1, y, 3) : 0;
        cnt += !d || d != 3 ? f(x - 1, y, 4) : 0;
    }
    return cnt;
}

int main()
{
    scanf("%d", &N);

    int X = 0, Y = 0;
    scanf("%d %d", &X, &Y);

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            scanf("%d", &map[y][x]);
        }
    }
    printf("%d", f(X - 1, Y - 1, 0));
    return 0;
}