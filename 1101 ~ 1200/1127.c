#include <stdio.h>

int main()
{
    float ratio = 0;
    int score = 0;
    float average = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%f %d", &ratio, &score);
        average += ratio * score;
    }
    printf("%.1f", average);
    return 0;
}