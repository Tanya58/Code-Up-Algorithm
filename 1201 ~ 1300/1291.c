#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    for (int i = a; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0 && c % i == 0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}