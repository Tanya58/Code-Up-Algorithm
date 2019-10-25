#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (b > c)
            printf("%d", b);
        else if (a > c)
            printf("%d", c);
        else
            printf("%d", a);
    }
    else
    {
        if (a > c)
            printf("%d", a);
        else if (b > c)
            printf("%d", c);
        else
            printf("%d", b);
    }

    return 0;
}