#include <stdio.h>

void f(int n)
{
    n--;
    if (n / 26)
    {
        f(n / 26);
    }
    putchar('A' + n % 26);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    f(n);
    return 0;
}
