#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int arr[100][100] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum[100] = {0};
    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        for (int j = 0; j < m; j++)
        {
            tmp += arr[i][j];
            sum[j] += tmp;
            printf("%d ", sum[j]);
        }
        printf("\n");
    }

    return 0;
}