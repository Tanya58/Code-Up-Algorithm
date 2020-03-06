#include <stdio.h>

int board[11][10];

int main()
{
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    for (int piece = 0; piece < 10; piece++)
    {
        if (board[10][piece] == 0)
        {
            continue;
        }
        printf("%d ", piece + 1);

        for (int i = 10; i > 0; i--)
        {
            if (board[i - 1][piece] > 0)
            {
                puts("crash");
                break;
            }
            else if (board[i - 1][piece] < 0)
            {
                puts("fall");
                break;
            }
            if (i == 1)
            {
                puts("safe");
            }
        }
    }

    return 0;
}