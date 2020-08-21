#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int max = 1 << n;
    for (int i = 0; i < max; i++)
    {
        for (int j = max / 2; j > 0; j /= 2)
        {
            printf("%c", i & j ? 'X' : 'O');
        }
        printf("\n");
    }

    return 0;
}