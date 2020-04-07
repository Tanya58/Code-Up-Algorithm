#include <stdio.h>

int myabs(int k)
{
    return k < 0 ? -k : k;
}

main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}