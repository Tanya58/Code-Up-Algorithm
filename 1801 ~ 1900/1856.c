#include <stdio.h>

int stair(int k)
{
    if (k < 3)
        return k;
    if (k < 4)
        return 4;
    return stair(k - 3) + stair(k - 2) + stair(k - 1);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", stair(n));
    return 0;
}