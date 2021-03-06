#include <stdio.h>

int main()
{
    int arr[100][100] = {0};

    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int cnt = 1;
    int dot_i = 1, dot_j = m;
    while (cnt <= n * m)
    {
        int i = dot_i - 1, j = dot_j - 1;
        while (i < n && j < m)
        {
            arr[i++][j++] = cnt++;
        }
        dot_j > 1 ? dot_j-- : dot_i++;
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