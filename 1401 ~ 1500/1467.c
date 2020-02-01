#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m; j > 0; j--)
        {
            printf("%d ", n * j - i);
        }
        printf("\n");
    }
    return 0;
}