#include <stdio.h>

int sumDigit(int k)
{
    int t = 0;
    while (k > 0)
    {
        t += k % 10;
        k /= 10;
    }
    return t;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    while (n > 9)
    {
        n = sumDigit(n);
    }

    printf("%d", n);

    return 0;
}