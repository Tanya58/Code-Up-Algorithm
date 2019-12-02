#include <stdio.h>

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n || (i + j - 1) % k == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}