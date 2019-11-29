#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", cnt--);
        }
        printf("\n");
    }

    return 0;
}