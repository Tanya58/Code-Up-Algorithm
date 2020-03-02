#include <stdio.h>

int arr[50][50];

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = 1;
    int round = n;
    int i = 0, j = -1;
    while (round > 0)
    {
        for (int idx = 0; idx < round; idx++)
        {
            arr[i][++j] = cnt++;
        }
        round--;
        for (int idx = 0; idx < round; idx++)
        {
            arr[++i][j] = cnt++;
        }
        for (int idx = 0; idx < round; idx++)
        {
            arr[i][--j] = cnt++;
        }
        --round;
        for (int idx = 0; idx < round; idx++)
        {
            arr[--i][j] = cnt++;
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