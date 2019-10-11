#include <stdio.h>
#define MAX 10

int main()
{
    int x = 0, y = 0;
    int maze[MAX][MAX] = {0};

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            scanf("%d", &maze[i][j]);
        }
    }

    x = 1;
    y = 1;
    while (1)
    {
        if (maze[x][y] == 2)
        {
            maze[x][y] = 9;
            break;
        }
        maze[x][y] = 9;

        if (maze[x][y + 1] == 2)
        {
            maze[x][y + 1] = 9;
            break;
        }
        else if (maze[x][y + 1] == 0)
        {
            y++;
            continue;
        }

        if (maze[x + 1][y] == 2)
        {
            maze[x + 1][y] = 9;
            break;
        }
        else if (maze[x + 1][y] == 1)
        {
            if (y == MAX - 2)
            {
                break;
            }
        }
        else if (maze[x + 1][y] == 0)
        {
            x++;
            continue;
        }
    }

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d ", maze[i][j]);
        }
        printf("\n");
    }

    return 0;
}