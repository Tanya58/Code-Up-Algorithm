#include <stdio.h>

int n;

void f(int a)
{
    int flag = 0; // 0: prime, 1: composite
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    printf("%s", flag == 0 ? "prime" : "composite");
}

int main()
{
    scanf("%d", &n);
    f(n);
    return 0;
}