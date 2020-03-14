#include <stdio.h>

int n;

void f(int a)
{
    printf("%s", !a ? "zero" : "non zero");
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}