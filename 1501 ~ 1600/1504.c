#include <stdio.h>

int arr[100][100];

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = 1;
    for (int i = -1, j = 0; j < n;)
    {
        while (++i < n)
        {
            arr[i][j] = cnt++;
        }
        j++;
        while (--i >= 0)
        {
            arr[i][j] = cnt++;
        }
        j++;
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