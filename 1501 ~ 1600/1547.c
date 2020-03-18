#include <stdio.h>

int n;

int prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    scanf("%d", &n);
    if (prime(n))
        printf("prime");
    else
        printf("composite");
    return 0;
}