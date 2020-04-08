#include <stdio.h>

int mymax(int n, int m)
{
    return n > m ? n : m;
}

main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}