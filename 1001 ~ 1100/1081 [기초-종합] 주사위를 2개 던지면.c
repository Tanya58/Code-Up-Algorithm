#include <stdio.h>

int main()
{
    int dice1 = 0, dice2 = 0;
    scanf("%d %d", &dice1, &dice2);
    for (int i = 1; i <= dice1; i++)
    {
        for (int j = 1; j <= dice2; j++)
        {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
