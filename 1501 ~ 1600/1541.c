#include <stdio.h>

int n;

void f(int a)
{
    printf("%s", a < 0 ? "negative" : a == 0 ? "zero" : "positive");
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}