#include <stdio.h>

void f(int a, int b)
{
    if (a > b)
    {
        return;
    }
    else if (a % 2)
    {
        printf("%d ", a);
    }
    f(a + 1, b);
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    f(a, b);
    return 0;
}