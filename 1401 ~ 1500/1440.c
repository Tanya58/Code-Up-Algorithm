#include <stdio.h>

int main()
{
    int n = 0;
    int number[1000] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (number[i] > number[j])
            {
                printf("> ");
            }
            else if (number[i] < number[j])
            {
                printf("< ");
            }
            else
            {
                printf("= ");
            }
        }
        printf("\n");
    }

    return 0;
}