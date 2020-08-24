#include <stdio.h>

char board[10][10];

void fill(int x, int y)
{
    if (x < 0 || y < 0 || x > 9 || y > 9 || board[y][x] != '_')
    {
        return;
    }
    board[y][x] = '*';

    fill(x - 1, y);
    fill(x + 1, y);
    fill(x, y - 1);
    fill(x, y + 1);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%c", &board[i][j]);
        }
        getchar();
    }

    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    fill(x, y);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}