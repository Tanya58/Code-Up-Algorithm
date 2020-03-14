#include <stdio.h>

int n;

void f(int a)
{
    printf("%s", a % 2 ? "odd" : "even");
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}