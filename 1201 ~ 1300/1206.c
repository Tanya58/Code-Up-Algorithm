#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    if (b % a == 0)
    {
        printf("%d*%d=%d", a, b / a, b);
    }
    else if (a % b == 0)
    {
        printf("%d*%d=%d", b, a / b, a);
    }
    else
    {
        printf("none");
    }
    return 0;
}