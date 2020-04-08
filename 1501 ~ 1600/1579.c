#include <stdio.h>

int mymin(int n, int m)
{
    return n < m ? n : m;
}

main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}