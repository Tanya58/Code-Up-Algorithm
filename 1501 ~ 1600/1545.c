#include <stdio.h>

int n;

int zero(int a)
{
    return !a;
}

int main()
{
    scanf("%d", &n);
    if (zero(n))
        printf("zero");
    else
        printf("non zero");
    return 0;
}