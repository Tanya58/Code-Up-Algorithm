#include <stdio.h>

int arr[100][100];

int abs(int a)
{
    return a > 0 ? a : -a;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = abs(x - i) + abs(y - j) + 1;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}