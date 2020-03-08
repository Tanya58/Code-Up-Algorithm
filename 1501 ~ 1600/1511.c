#include <stdio.h>

int arr[100][100];

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = cnt++;
        }
    }

    int sum = 0;
    int round = n;
    int i = 0, j = -1;
    for (int idx = 0; idx < round; idx++)
    {
        sum += arr[i][++j];
    }
    round--;
    for (int idx = 0; idx < round; idx++)
    {
        sum += arr[++i][j];
    }
    for (int idx = 0; idx < round; idx++)
    {
        sum += arr[i][--j];
    }
    --round;
    for (int idx = 0; idx < round; idx++)
    {
        sum += arr[--i][j];
    }

    printf("%d", sum);

    return 0;
}