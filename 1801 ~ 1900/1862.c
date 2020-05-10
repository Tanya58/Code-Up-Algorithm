#include <stdio.h>

char chk[101];
long long int d[101];

long long int f(int k)
{
    if (chk[k])
    {
        return d[k];
    }
    else
    {
        chk[k] = 1;
        return k < 3 ? (d[k] = 1) : (d[k] = (f(k - 1) + f(k - 2)) % 1000000007);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%lld", f(n));
    return 0;
}