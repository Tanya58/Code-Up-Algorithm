#include <stdio.h>

void myswap(int *n, int *m)
{
    if (*n < *m)
    {
        return 0;
    }
    int tmp = *n;
    *n = *m;
    *m = tmp;
}

main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}