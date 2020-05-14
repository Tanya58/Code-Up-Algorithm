#include <stdio.h>

char chk[21];
long long int fibonacci[21];

long long int f(int k)
{
    if (chk[k])
    {
        return fibonacci[k];
    }
    else
    {
        chk[k] = 1;
        return fibonacci[k] = k < 3 ? 1 : f(k - 1) + f(k - 2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%lld", f(n));
    return 0;
}