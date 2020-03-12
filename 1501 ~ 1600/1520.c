#include <stdio.h>
#include <string.h>

int point[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int before[170][170];
int after[170][170];

int checkLife(int x, int y)
{
    int life = 0;
    for (int i = 0; i < 8; i++)
    {
        life += before[x + point[i][0]][y + point[i][1]];
    }
    return life;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int x = 0, y = 0, z = 0;
    scanf("%d %d %d", &x, &y, &z);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &before[i][j]);
        }
    }

    int k = 0;
    scanf("%d", &k);

    for (int round = 0; round < k; round++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                int life = checkLife(i, j);
                if (before[i][j])
                {
                    after[i][j] = life >= y && life < z ? 1 : 0;
                }
                else
                {
                    after[i][j] = life == x ? 1 : 0;
                }
            }
        }
        memcpy(before, after, sizeof(before));
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", before[i][j]);
        }
        printf("\n");
    }

    return 0;
}
