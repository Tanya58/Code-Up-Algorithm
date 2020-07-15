#include <stdio.h>

int map[4][4];
void up()
{
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int t = i + 1; t < 4; t++)
            {
                if (map[i][j] == 0)
                {
                    map[i][j] = map[t][j];
                    map[t][j] = 0;
                }
                else if (map[t][j] == 0)
                {
                    continue;
                }
                else if (map[i][j] != map[t][j])
                {
                    break;
                }
                else
                {
                    map[i][j] += map[t][j];
                    map[t][j] = 0;
                    break;
                }
            }
        }
    }
}
void down()
{
    for (int j = 0; j < 4; j++)
    {
        for (int i = 3; i >= 0; i--)
        {
            for (int t = i - 1; t >= 0; t--)
            {
                if (map[i][j] == 0)
                {
                    map[i][j] = map[t][j];
                    map[t][j] = 0;
                }
                else if (map[t][j] == 0)
                {
                    continue;
                }
                else if (map[i][j] != map[t][j])
                {
                    break;
                }
                else
                {
                    map[i][j] += map[t][j];
                    map[t][j] = 0;
                    break;
                }
            }
        }
    }
}
void right()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j >= 0; j--)
        {
            for (int t = j - 1; t >= 0; t--)
            {
                if (map[i][j] == 0)
                {
                    map[i][j] = map[i][t];
                    map[i][t] = 0;
                }
                else if (map[i][t] == 0)
                {
                    continue;
                }
                else if (map[i][j] != map[i][t])
                {
                    break;
                }
                else
                {
                    map[i][j] += map[i][t];
                    map[i][t] = 0;
                    break;
                }
            }
        }
    }
}
void left()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int t = j + 1; t < 4; t++)
            {
                if (map[i][j] == 0)
                {
                    map[i][j] = map[i][t];
                    map[i][t] = 0;
                }
                else if (map[i][t] == 0)
                {
                    continue;
                }
                else if (map[i][j] != map[i][t])
                {
                    break;
                }
                else
                {
                    map[i][j] += map[i][t];
                    map[i][t] = 0;
                    break;
                }
            }
        }
    }
}

int main()
{
    char direction = 0;
    scanf("%c", &direction);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        switch (direction)
        {
        case 'U':
            up();
            break;
        case 'D':
            down();
            break;
        case 'L':
            left();
            break;
        case 'R':
            right();
            break;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}