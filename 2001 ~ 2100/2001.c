#include <stdio.h>

int main()
{
    int price[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &price[i]);
    }
    int pasta = price[0];
    for (int i = 1; i < 3; i++)
    {
        if (pasta > price[i])
        {
            pasta = price[i];
        }
    }
    int juice = price[3];
    for (int i = 3; i < 5; i++)
    {
        if (juice > price[i])
        {
            juice = price[i];
        }
    }
    printf("%.1lf", (pasta + juice) * 1.1);

    return 0;
}