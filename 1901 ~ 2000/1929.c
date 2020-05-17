#include <stdio.h>

void f(int n)
{
    if (n != 1)
    {
        n % 2 ? f(3 * n + 1) : f(n / 2);
    }
    printf("%d\n", n);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    f(n);
    return 0;
}

//f(n){n^1&&(n%2?f(3*n+1):f(n/2));printf("%d\n",n);}main(n){scanf("%d",&n);f(n);}