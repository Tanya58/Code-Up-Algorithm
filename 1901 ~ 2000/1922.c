#include <stdio.h>

int f(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2)
    {
        return f(3 * n + 1) + 1;
    }
    else
    {
        return f(n / 2) + 1;
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}

//f(n){return n^1?(n%2?f(3*n+1):f(n/2))+1:1;}main(n){scanf("%d",&n);printf("%d",f(n));}