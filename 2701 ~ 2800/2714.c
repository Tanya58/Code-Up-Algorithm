#include <stdio.h>

int N, Q, X, Y, R, K;
int arr[501][501];
int chk[501][501];

void f(int x, int y, int r)
{
    if (x < 1 || y < 1 || x > N || y > N || r < 0)
    {
        return;
    }
    if (chk[x][y] == 0)
    {
        arr[x][y] += K;
        chk[x][y] = 1;
    }
    f(x - 1, y - 1, r - 1); // ↖
    f(x - 1, y, r - 1);     // ↗
    f(x, y - 1, r - 1);     // ←
    f(x, y + 1, r - 1);     // →
    f(x + 1, y, r - 1);     // ↙
    f(x + 1, y + 1, r - 1); // ↘
}

int main()
{
    scanf("%d %d", &N, &Q);
    for (int i = 0; i < Q; i++)
    {
        memset(chk, 0, sizeof(chk));
        scanf("%d %d %d %d", &X, &Y, &R, &K);
        f(X, Y, R);
    }

    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    printf("%d", arr[x][y]);

    return 0;
}