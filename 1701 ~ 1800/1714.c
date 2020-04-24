#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    do
    {
        printf("%d", n % 10);
        n /= 10;
    } while (n > 0);

    return 0;
}