#include <stdio.h>

int hex2int(char t)
{
    return t >= '0' && t <= '9' ? t - '0' : t >= 'A' && t <= 'Z' ? t - 'A' + 10 : -1;
}

int main()
{
    char t = 0;
    char bit[6] = {0, 0, 0, 0, ' ', 0};

    int n = 0;
    while (scanf("%c", &t) != -1)
    {
        n = hex2int(t);

        for (int i = 3; i >= 0; i--)
        {
            bit[i] = '0' + (n & 1);
            n = n >> 1;
        }

        printf("%s", bit);
    }

    return 0;
}