#include <stdio.h>

int arr[100][100];

int main()
{
    int sum = 0;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        for (int i = x1; i < x2; i++)
        {
            for (int j = y1; j < y2; j++)
            {
                arr[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (arr[i][j] == 1)
                sum++;
        }
    }

    printf("%d", sum);

    return 0;
}