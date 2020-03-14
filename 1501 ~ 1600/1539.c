#include <stdio.h>

int n;

void f(int a)
{
    printf("%s", !a ? "false" : "true");
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}