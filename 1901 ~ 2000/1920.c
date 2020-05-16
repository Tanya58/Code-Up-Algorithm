#include <stdio.h>

void f(int k)
{
    if (k >> 1)
    {
        f(k >> 1);
    }
    printf("%d", k % 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    f(n);
    return 0;
}

//f(k){k>1&&f(k/2);printf("%d",k%2);}main(n){scanf("%d",&n);f(n);}
