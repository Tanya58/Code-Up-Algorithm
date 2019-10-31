#include <stdio.h>

int main()
{
    int time = 0, score1 = 0, score2 = 0;
    scanf("%d %d %d", &time, &score1, &score2);

    if (score1 + (94 - time) / 5 > score2)
    {
        printf("win");
    }
    else if (score1 + (94 - time) / 5 < score2)
    {
        printf("lose");
    }
    else
    {
        printf("same");
    }

    return 0;
}