#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0 && i % 4 == 0)
        {
            continue;
        }
        else if (i % 3 == 0)
        {
            sum += i;
        }
        else if (i % 4 == 0)
        {
            sum -= i;
        }
    }

    printf("%d", sum);

    return 0;
}