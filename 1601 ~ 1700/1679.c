#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int result = -1;
    for (int i = 1; i <= n / 3; i++)
    {
        for (int j = i; j < n - i; j++)
        {
            int k = n - i - j;
            if (k < i || k < j)
            {
                break;
            }
            if (k < i + j)
            {
                result = 0;
                printf("%d %d %d\n", i, j, k);
            }
        }
    }

    if (result)
    {
        printf("%d", -1);
    }

    return 0;
}