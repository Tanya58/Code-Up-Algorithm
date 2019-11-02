#include <stdio.h>

int main()
{
    int lotto[7] = {0};
    int juhee[6] = {0};
    int bonus_flag = 0;
    scanf("%d %d %d %d %d %d %d", &lotto[0], &lotto[1], &lotto[2], &lotto[3], &lotto[4], &lotto[5], &lotto[6]);
    scanf("%d %d %d %d %d %d", &juhee[0], &juhee[1], &juhee[2], &juhee[3], &juhee[4], &juhee[5]);

    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (juhee[i] == lotto[j])
            {
                cnt++;
                break;
            }
        }
    }
    switch (cnt)
    {
    case 6:
        printf("1");
        break;
    case 5:
        for (int i = 0; i < 6; i++)
        {
            if (lotto[6] == juhee[i])
            {
                bonus_flag = 1;
                break;
            }
        }
        if (bonus_flag)
        {
            printf("2");
        }
        else
        {
            printf("3");
        }
        break;
    case 4:
        printf("4");
        break;
    case 3:
        printf("5");
        break;
    default:
        printf("0");
        break;
    }

    return 0;
}