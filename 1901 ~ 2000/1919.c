#include <stdio.h>

int g(int k) 
{
   return k % 10? k : g(k / 10);
}

void f(int k)
{   
    printf("%d",k % 10);
    if (k / 10 > 0) f(k / 10);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    n? f(g(n)) : f(n);
    return 0;
}