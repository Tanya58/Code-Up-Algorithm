#include <stdio.h>

int main()
{
    int ternel[3] = {0};
    scanf("%d %d %d", &ternel[0], &ternel[1], &ternel[2]);

    for (int i = 0; i < 3; i++)
    {
        if (ternel[i] <= 170)
        {
            printf("CRASH %d", ternel[i]);
            return -1;
        }
    }
    printf("PASS");
    return 0;
}