#include <stdio.h>

int main()
{
    int hex = 0;
    scanf("%X", &hex);
    for (int i = 1; i <= 0x0F; i++)
    {
        printf("%X*%X=%X\n", hex, i, hex * i);
    }
    return 0;
}