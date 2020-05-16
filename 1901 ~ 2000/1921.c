#include <stdio.h>

int f(int n, int k)
{
    (n / k) && f(n / k, k);
    putchar(n % k + (n % k > 9 ? 'A' - 10 : '0'));
}

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    f(n, k);
    return 0;
}

//f(n,k){n/k&&f(n/k,k);putchar(n%k+(n%k>9?55:48));}main(n,k){scanf("%d%d",&n,&k);f(n,k);}
