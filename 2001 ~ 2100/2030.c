#include <stdio.h>
#include <string.h>

char map[30][60];

void makeWindow(char *program, int x1, int y1, int x2, int y2)
{
    for (int y = y1; y <= y2; y++)
    {
        for (int x = x1; x <= x2; x++)
        {
            if (y == y1 && x == x1 + 1)
            {
                for (int i = 0; i < strlen(program) && i < x2 - x1 - 1; i++)
                {
                    map[y][x++] = *(program + i);
                }
                x--;
            }
            else if ((y == y1 && x == x1) || (y == y1 && x == x2) || (y == y2 && x == x1) || (y == y2 && x == x2))
            {
                map[y][x] = '+';
            }
            else if ((y == y1 || y == y2) && (x != x1 || x != x2))
            {
                map[y][x] = '-';
            }
            else if ((y != y1 || y != y2) && (x == x1 || x == x2))
            {
                map[y][x] = '|';
            }
            else
            {
                map[y][x] = ' ';
            }
        }
    }
}

int main()
{
    memset(map, '.', sizeof(map));

    int n = 0;
    scanf("%d", &n);

    char program_name[61] = {0};
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d %d", program_name, &x1, &y1, &x2, &y2);
        makeWindow(program_name, x1 - 1, y1 - 1, x2 - 1, y2 - 1);
    }

    for (int y = 0; y < 30; y++)
    {
        for (int x = 0; x < 60; x++)
        {
            printf("%c", map[y][x]);
        }
        printf("\n");
    }
    return 0;
}