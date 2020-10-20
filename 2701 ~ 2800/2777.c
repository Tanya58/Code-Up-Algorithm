#include <stdio.h>

enum chess_piece
{
    WHITE_FLOOR,
    BLACK_FLOOR,
    BLACK_PWAN,
    BLACK_ROOK,
    BLACK_KNIGHT,
    BLACK_BISHOP,
    BLACK_KING,
    BLACK_QUEEN,
    WHITE_PWAN,
    WHITE_ROOK,
    WHITE_KNIGHT,
    WHITE_BISHOP,
    WHITE_KING,
    WHITE_QUEEN,
    END
};

int main()
{
    int map[8][8] = {0};
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            map[i][j] = i % 2 == j % 2 ? WHITE_FLOOR : BLACK_FLOOR;
        }
    }

    int p = 0, a = 0, b = 0;
    while (1)
    {
        scanf("%d %d %d", &p, &a, &b);
        if (p == END)
        {
            break;
        }
        map[b - 1][a - 1] = p;
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (map[i][j] == 1)
            {
                printf("**");
            }
            else
            {
                printf("%02d", map[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}