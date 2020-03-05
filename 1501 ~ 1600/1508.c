#include <stdio.h>

int arr[20][20];

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i][0]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            arr[i][j] = arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}