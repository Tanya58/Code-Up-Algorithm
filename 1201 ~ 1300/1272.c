#include <stdio.h>

int getMoney(int n)
{
    return n % 2 ? (n + 1) / 2 : n * 5;
}

int main()
{
    int k = 0, h = 0;
    scanf("%d %d", &k, &h);
    printf("%d", getMoney(k) + getMoney(h));
    return 0;
}