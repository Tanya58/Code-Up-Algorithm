#include <stdio.h>

int arr[1001][1001];
int sum[1001][1001];

int main()
{
    int R = 0;
    scanf("%d", &R);

    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            scanf("%d", &arr[i][j]);
            sum[i][j] = arr[i][j] + (sum[i - 1][j - 1] > sum[i - 1][j] ? sum[i - 1][j - 1] : sum[i - 1][j]);
        }
    }
    int max = 0;
    for (int i = 1; i <= R; i++)
    {
        if (sum[R][max] < sum[R][i])
        {
            max = i;
        }
    }
    printf("%d", sum[R][max]);

    return 0;
}