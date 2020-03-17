#include <stdio.h>

int n;

int zero(int a)
{
    return !a ? 1 : 0;
}

int plus(int a)
{
    return a > 0 ? 1 : 0;
}

int main()
{
    scanf("%d", &n);
    if (zero(n))
        printf("zero");
    else
        printf("%s", plus(n) ? "plus" : "minus");
    return 0;
}