#include <stdio.h>

int main()
{
    int score[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
    }

    int basic = 100;
    while (basic > 0)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", score[j] < basic ? ' ' : '#');
        }
        printf("\n");
        basic -= 10;
    }

    return 0;
}