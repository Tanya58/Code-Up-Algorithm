#include <stdio.h>

int main()
{
    int a = 0, b = 0, sum = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
            sum += i;
    }
    printf("%d", sum);
    return 0;
}