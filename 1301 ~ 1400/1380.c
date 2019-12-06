#include <stdio.h>

int main()
{
    int k = 0;
    scanf("%d", &k);

    for (int i = 1; i <= 6 && i < k; i++)
    {
        for (int j = 1; j <= 6 && j < k; j++)
        {
            if (i + j == k)
            {
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}