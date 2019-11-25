#include <stdio.h>

int main()
{
    int s = 0, e = 0;
    scanf("%d %d", &s, &e);

    for (int i = s; i <= e; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%d*%d=%d\n", i, j, i * j);
        }
    }

    return 0;
}