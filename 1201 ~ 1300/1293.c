#include <stdio.h>

int main()
{
    int n = 0, score = 0, first = 0, last = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score);
        if (i == 0)
        {
            first = last = score;
        }
        else
        {
            if (first < score)
            {
                first = score;
            }
            if (last > score)
            {
                last = score;
            }
        }
    }
    printf("%d %d", first, last);
    return 0;
}