#include <stdio.h>

int main()
{
    int minute = 0, score = 0;
    scanf("%d %d", &minute, &score);
    score += (90 - minute) / 5;
    if ((90 - minute) % 5)
    {
        score++;
    }
    printf("%d", score);
    return 0;
}