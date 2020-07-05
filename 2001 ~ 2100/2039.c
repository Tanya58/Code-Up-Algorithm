#include <stdio.h>

int main()
{
    int hour = 0, minute = 0;
    int lesson_cnt = 0, lesson_time = 0, rest_time = 0;
    int lunch = 0, lunch_time = 0;

    scanf("%d %d %d %d %d %d %d", &hour, &minute, &lesson_time, &rest_time, &lesson_cnt, &lunch, &lunch_time);
    for (int i = 1; i <= lesson_cnt; i++)
    {
        printf("%d:%02d-", hour, minute);

        minute += lesson_time;
        hour += minute / 60;
        minute %= 60;
        printf("%d:%02d %d교시\n", hour, minute, i);

        if (i == lunch)
        {
            printf("%d:%02d-", hour, minute);
            minute += lunch_time;
            hour += minute / 60;
            minute %= 60;
            printf("%d:%02d 점심시간\n", hour, minute);
        }
        else
        {
            minute += rest_time;
            hour += minute / 60;
            minute %= 60;
        }
    }

    return 0;
}