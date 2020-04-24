#include <stdio.h>

int main()
{
    // an + d

    int a0 = 0, a1 = 0, k = 0;
    scanf("%d %d %d", &a0, &a1, &k);

    for (int i = a0; i <= k; i += a1 - a0)
    {
        printf("%d ", i);
    }

    return 0;
}