#include <stdio.h>

int main()
{
    double avg = 0;
    int score[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &score[i]);
        avg += score[i];
    }
    avg /= 10;

    int big = 0, small = 0;
    for (int i = 0; i < 10; i++)
    {
        if (score[i] >= avg)
        {
            big++;
        }
        else
        {
            small++;
        }
    }

    printf("%.1lf\n", avg);
    printf("%d %d", big, small);

    return 0;
}