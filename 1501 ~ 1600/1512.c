#include <stdio.h>

int arr[100][100];

int main()
{
    int n = 0;
    scanf("%d", &n);

    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    x--;
    y--;

    for (int i = 0; x + i < n || x - i >= 0; i++)
    {
        for (int j = 0; y + j < n || y - j >= 0; j++)
        {
            if (x - i >= 0)
            {
                if (y - j >= 0)
                {
                    arr[x - i][y - j] = i + j + 1;
                }
                if (y + j < n)
                {
                    arr[x - i][y + j] = i + j + 1;
                }
            }

            if (x + i < n)
            {
                if (y - j >= 0)
                {
                    arr[x + i][y - j] = i + j + 1;
                }
                if (y + j < n)
                {
                    arr[x + i][y + j] = i + j + 1;
                }
            }
        }
    }

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