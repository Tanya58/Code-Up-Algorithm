#include <stdio.h>
#include <string.h>

enum chess_piece
{
    BLACK_FLOOR = -1,
    WHITE_FLOOR,
    PWAN,
    ROOK,
    KNIGHT,
    BISHOP,
    KING,
    QUEEN,
    AVAIL_PATH
};

int Board[8][8] = {
    {0, -1, 0, -1, 0, -1, 0, -1},
    {-1, 0, -1, 0, -1, 0, -1, 0},
    {0, -1, 0, -1, 0, -1, 0, -1},
    {-1, 0, -1, 0, -1, 0, -1, 0},
    {0, -1, 0, -1, 0, -1, 0, -1},
    {-1, 0, -1, 0, -1, 0, -1, 0},
    {0, -1, 0, -1, 0, -1, 0, -1},
    {-1, 0, -1, 0, -1, 0, -1, 0},
};

void show(int path[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (path[i][j] == BLACK_FLOOR)
            {
                printf("**");
            }
            else if (path[i][j] == AVAIL_PATH)
            {
                printf("++");
            }
            else
            {
                printf("%02d", Board[i][j]);
            }
        }
        printf("\n");
    }
}

void movePwan()
{
    int path[8][8] = {0};
    memcpy(path, Board, sizeof(path));

    show(path);
}

int main()
{
    int p = 0, a = 0, b = 0;
    scanf("%d %d %d", &p, &a, &b);
    Board[b - 1][a - 1] = p;

    int path[8][8] = {0};
    memcpy(path, Board, sizeof(Board));

    switch (p)
    {
    case PWAN:
    {
        int d[3][2] = {{-1, -1}, {0, -1}, {1, -1}};
        for (int i = 0; i < 3; i++)
        {
            int ta = a + d[i][0], tb = b + d[i][1];
            if (ta > 0 && ta < 9 && tb > 0 && tb < 9)
            {
                path[tb - 1][ta - 1] = AVAIL_PATH;
            }
        }
        break;
    }
    case ROOK:
    {
        int d[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (int i = 0; i < 4; i++)
        {
            for (int j = 1; j < 8; j++)
            {
                int ta = a + d[i][0] * j, tb = b + d[i][1] * j;
                if (ta > 0 && ta < 9 && tb > 0 && tb < 9)
                {
                    path[tb - 1][ta - 1] = AVAIL_PATH;
                }
            }
        }
        break;
    }
    case KNIGHT:
    {
        int d[8][2] = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {1, 2}, {-1, 2}};
        for (int i = 0; i < 8; i++)
        {
            int ta = a + d[i][0], tb = b + d[i][1];
            if (ta > 0 && ta < 9 && tb > 0 && tb < 9)
            {
                path[tb - 1][ta - 1] = AVAIL_PATH;
            }
        }
        break;
    }
    case BISHOP:
    {
        int d[4][2] = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
        for (int i = 0; i < 4; i++)
        {
            for (int j = 1; j < 8; j++)
            {
                int ta = a + d[i][0] * j, tb = b + d[i][1] * j;
                if (ta > 0 && ta < 9 && tb > 0 && tb < 9)
                {
                    path[tb - 1][ta - 1] = AVAIL_PATH;
                }
            }
        }
        break;
    }
    case KING:
    {
        int d[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        for (int i = 0; i < 8; i++)
        {
            int ta = a + d[i][0], tb = b + d[i][1];
            if (ta > 0 && ta < 9 && tb > 0 && tb < 9)
            {
                path[tb - 1][ta - 1] = AVAIL_PATH;
            }
        }
        break;
    }
    case QUEEN:
    {
        int d[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        for (int i = 0; i < 8; i++)
        {
            for (int j = 1; j < 8; j++)
            {
                int ta = a + d[i][0] * j, tb = b + d[i][1] * j;
                if (ta > 0 && ta < 9 && tb > 0 && tb < 9)
                {
                    path[tb - 1][ta - 1] = AVAIL_PATH;
                }
            }
        }
        break;
    }
    }
    show(path);
    return 0;
}