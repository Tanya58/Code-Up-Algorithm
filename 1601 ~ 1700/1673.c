#include <stdio.h>

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int key[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &key[i]);
    }

    printf("%d", gcd(gcd(key[0], key[1]), gcd(key[0], key[2])));

    return 0;
}