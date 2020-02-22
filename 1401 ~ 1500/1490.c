#include <stdio.h>

int main()
{
    int arr[100][100] = {0};

    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int cnt = 1;
    int direct = 3;
    int x = n, y = 0;
    while (cnt <= n * m)
    {
        direct %= 4;
        switch (direct)
        {
        case 0:
            y < m - 1 && arr[x][y + 1] == 0 ? y++ : direct++;
            break;
        case 1:
            x < n - 1 && arr[x + 1][y] == 0 ? x++ : direct++;
            break;
        case 2:
            y > 0 && arr[x][y - 1] == 0 ? y-- : direct++;
            break;
        case 3:
            x > 0 && arr[x - 1][y] == 0 ? x-- : direct++;
            break;
        }

        if (arr[x][y] == 0)
        {
            arr[x][y] = cnt++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}