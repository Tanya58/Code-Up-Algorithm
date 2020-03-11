#include <stdio.h>

int before[25][25];
int after[25][25];

void checkLife(int x, int y)
{
    int life = 0;
    if (x > 0 && y > 0 && before[x - 1][y - 1])
    {
        life++;
    }
    if (x > 0 && before[x - 1][y])
    {
        life++;
    }
    if (x > 0 && y < 24 && before[x - 1][y + 1])
    {
        life++;
    }
    if (y > 0 && before[x][y - 1])
    {
        life++;
    }
    if (y < 24 && before[x][y + 1])
    {
        life++;
    }
    if (x < 24 && y > 0 && before[x + 1][y - 1])
    {
        life++;
    }
    if (x < 24 && before[x + 1][y])
    {
        life++;
    }
    if (x < 24 && y < 24 && before[x + 1][y + 1])
    {
        life++;
    }

    if (before[x][y])
    {
        if (life == 2 || life == 3)
        {
            after[x][y] = 1;
        }
        else
        {
            after[x][y] = 0;
        }
    }
    else
    {
        if (life == 3)
        {
            after[x][y] = 1;
        }
        else
        {
            after[x][y] = 0;
        }
    }
}

int main()
{
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            scanf("%d", &before[i][j]);
        }
    }

    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            checkLife(i, j);
        }
    }

    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            printf("%d ", after[i][j]);
        }
        printf("\n");
    }

    return 0;
}

