#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        tmp = n * i;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", tmp--);
        }
        printf("\n");
    }
    return 0;
}