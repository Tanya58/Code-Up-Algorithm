#include <stdio.h>

int arr[7][7];

void life_game(int direction, int x, int y)
{
    switch (direction)
    {
    case 0: // down
        x++;
        break;
    case 1: // up
        x--;
        break;
    case 2: // left
        y--;
        break;
    case 3: // right
        y++;
        break;
    }

    if (x < 0 || y < 0 || x >= 7 || y >= 7)
    {
        return;
    }

    if (arr[x][y] == 2)
    {
        switch (direction)
        {
        case 0: // down
            life_game(0, x, y);
            life_game(2, x, y);
            life_game(3, x, y);
            break;
        case 1: // up
            life_game(1, x, y);
            life_game(2, x, y);
            life_game(3, x, y);
            break;
        case 2: // left
            life_game(0, x, y);
            life_game(1, x, y);
            life_game(2, x, y);
            break;
        case 3: // right
            life_game(0, x, y);
            life_game(1, x, y);
            life_game(3, x, y);
            break;
        }
    }
    else
    {
        arr[x][y] = 1;
        life_game(direction, x, y);
    }
}

int main()
{
    int x = 0, y = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &x, &y);
        arr[x - 1][y - 1] = 2;
    }

    life_game(3, 3, -1);

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}