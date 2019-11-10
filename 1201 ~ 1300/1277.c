#include <stdio.h>

int main()
{
    int n = 0, tmp = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &tmp);
        if (i == 1)
            printf("%d ", tmp);
        if (i == n / 2 + 1)
            printf("%d ", tmp);
        if (i == n)
            printf("%d", tmp);
    }
    return 0;
}