#include <stdio.h>

int main()
{
    int k = 0;
    scanf("%d", &k);

    char icon[3][3] = {{'*', 'x', '*'}, {' ', 'x', 'x'}, {'*', ' ', '*'}};
    for (int i = 0; i < 3 * k; i++)
    {
        for (int j = 0; j < 3 * k; j++)
        {
            printf("%c", icon[i / k][j / k]);
        }
        printf("\n");
    }
    return 0;
}