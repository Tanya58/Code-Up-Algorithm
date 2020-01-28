#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int tmp = 1;
    for (int i = 1; i <= n; i++)
    {
        tmp = i;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", tmp);
            tmp += n;
        }
        printf("\n");
    }
    return 0;
}