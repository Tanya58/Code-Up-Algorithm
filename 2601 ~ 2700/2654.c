#include <stdio.h>

long long int chk[100000][2];

long long int f(int len, int k)
{
    if (len == 1)
    {
        return 1;
    }
    if (chk[len][k] == 0)
    {
        long long int rtn = f(len - 1, 1) % 1000000007;
        rtn += (k ? f(len - 1, 0) : 0) % 1000000007;
        chk[len][k] = rtn;
    }
    return chk[len][k];
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%lld", (f(n, 0) + f(n, 1)) % 1000000007);
    return 0;
}