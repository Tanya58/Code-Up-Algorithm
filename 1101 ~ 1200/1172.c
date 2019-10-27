#include <stdio.h>

int main()
{
    int num[3] = {0};
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    for (int i = 0; i < 3 - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < 3; j++)
        {
            if (num[min] > num[j])
                min = j;
        }
        int tmp = num[i];
        num[i] = num[min];
        num[min] = tmp;
    }
    for (int i = 0; i < 3; i++)
        printf("%d ", num[i]);
    return 0;
}