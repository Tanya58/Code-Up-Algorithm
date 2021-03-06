#include <stdio.h>

int main()
{
    int arr[100][100] = {0};

    int cnt = 1;
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int dot_i = n, dot_j = m;
    while (cnt <= n * m)
    {
        int i = dot_i - 1, j = dot_j - 1;
        while (i < n && j >= 0)
        {
            arr[i++][j--] = cnt++;
        }
        dot_i > 1 ? dot_i-- : dot_j--;
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
