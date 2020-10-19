#include <stdio.h>

int N, x1, y1, x2, y2, D;
int Map[21][21];

int d1[9][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 0}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
int d2[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int clsoeSchool(int day, int x, int y)
{
    if (day < 0 || x < 1 || y < 1 || x > N || y > N)
    {
        return 0;
    }
    if (Map[x][y] == 1)
    {
        return 1;
    }
    Map[x][y] = 2;
    for (int i = 0; i < 4; i++)
    {
        if (clsoeSchool(day - 1, x + d2[i][0], y + d2[i][1]) == 1)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    scanf("%d", &N);
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d", &D);

    int x = 0, y = 0;
    for (int i = 0; i < 9; i++)
    {
        x = x1 + d1[i][0];
        y = y1 + d1[i][1];
        if (x > 0 && y > 0 && x <= N && y <= N)
        {
            Map[x][y] = 1;
        }
    }
    printf("%d", clsoeSchool(D, x2, y2));
    return 0;
}