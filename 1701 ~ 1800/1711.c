#include <stdio.h>

int main()
{
    int x[3] = {0}, y[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    if (x[0] <= x[2] && x[2] <= x[1] && y[0] <= y[2] && y[2] <= y[1])
    {
        printf("충돌");
    }
    else
    {
        printf("비충돌");
    }

    return 0;
}