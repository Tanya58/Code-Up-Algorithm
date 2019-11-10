#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0 || n % i == 0)
        {
            puts("not prime");
            return 0;
        }
    }
    puts("prime");
    return 0;
}