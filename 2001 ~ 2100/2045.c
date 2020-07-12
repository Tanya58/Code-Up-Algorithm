#include <stdio.h>
#include <stdlib.h>

// Eulerian Path
// 1. 모든 꼭짓점의 차수가 짝수이다.
// 2. 꼭짓점의 차수가 2개만 홀수이고 나머지는 모두 짝수이다.

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int x = 0, y = 0;
    char map[100][100] = {0};
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        map[x - 1][y - 1]++;
        map[y - 1][x - 1]++;
    }

    int odd_cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int dgree = 0;
        for (int j = 0; j < n; j++)
        {
            dgree += map[i][j];
        }
        if (dgree == 0)
        {
            printf("NO");
            return 0;
        }
        if (dgree % 2)
        {
            odd_cnt++;
        }
    }
    printf("%s", odd_cnt && odd_cnt != 2 ? "NO" : "YES");
    return 0;
}