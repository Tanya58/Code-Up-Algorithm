#include <stdio.h>

int main()
{
    int minute = 0, score = 0;
    scanf("%d %d", &minute, &score);

    int count = 0;
    while (minute + count < 90)
    {
        if (count % 5 == 0)
            score++;
        count++;
    }
    printf("%d", score);
    return 0;
}