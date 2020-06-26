#include <stdio.h>

int arr[19][1000000];

void init(int m, int n)
{
    arr[0][0] = 1;
    arr[0][1] = 1;

    for (int i = 1; i < m; i++)
    {
        arr[i][0] = 1;

        int j = 1;
        while (arr[i - 1][j / 2] != 0)
        {
            arr[i][j] = j % 2 == 0 ? arr[i - 1][j / 2] : arr[i - 1][j / 2] + arr[i - 1][j / 2 + 1];
            j++;
        }
    }
}

int main()
{
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);

    init(m, n);
    printf("%d", arr[m - 1][n - 1]);

    return 0;
}