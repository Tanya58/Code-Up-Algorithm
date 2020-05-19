#include <stdio.h>

int tmp[15][15];

int SuperSum(int k, int n)
{

    if (k == 0 || n == 1)
    {
        return n;
    }

    if (!tmp[k][n])
    {
        tmp[k][n] = SuperSum(k - 1, n) + SuperSum(k, n - 1);
    }

    return tmp[k][n];
}

int main()
{
    int k = 0, n = 0;
    while (scanf("%d %d", &k, &n) != EOF)
    {
        printf("%d\n", SuperSum(k, n));
    }
    return 0;
}

//t[15][15];f(k,n){return t[k][n]?t[k][n]:(t[k][n]=k&&n^1?f(k-1,n)+f(k,n-1):n);}main(k,n){while(~scanf("%d%d",&k,&n))printf("%d\n",f(k,n));}