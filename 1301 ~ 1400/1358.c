#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < (n - i) / 2)
            {
                printf(" ");
            }
            else if (j >= (n + i) / 2)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}