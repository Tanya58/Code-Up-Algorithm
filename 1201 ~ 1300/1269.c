#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, n = 0;
    scanf("%d %d %d %d", &a, &b, &c, &n);

    for (int i = 1; i < n; i++)
    {
        a = a * b + c;
    }
    printf("%d", a);

    return 0;
}