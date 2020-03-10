#include <stdio.h>

int arr[99][99];

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = 1;
    int flag = 0; // 0: ↗, 1: ↙
    int x = n - 1, y = 0;
    do
    {
        arr[x][y] = cnt++;
        if (flag)
        {
            if (y > 0 && x < n - 1)
            {
                x++;
                y--;
            }
            else
            {
                flag = 0;
                y++;
            }
        }
        else
        {
            if (x > 0 && y < n - 1)
            {
                x--;
                y++;
            }
            else
            {
                flag = 1;
                x++;
            }
        }
    } while (x < n || y < n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}