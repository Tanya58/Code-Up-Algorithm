#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", n * j - i);
        }
        printf("\n");
    }
    return 0;
}