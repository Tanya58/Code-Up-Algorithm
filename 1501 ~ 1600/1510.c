#include <stdio.h>

int arr[49][49];

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = 0;
    int i = 0, j = n / 2;
    while (cnt < n * n)
    {
        arr[i][j] = ++cnt;

        if (cnt % n == 0)
        {
            i = ++i % n;
        }
        else
        {
            if (--i < 0)
            {
                i = n - 1;
            }
            j = ++j % n;
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