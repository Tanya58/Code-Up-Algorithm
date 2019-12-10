#include <stdio.h>

int main()
{
    int k = 0;
    int number[100] = {0};
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d\n", number[j]);
        }
    }
    return 0;
}