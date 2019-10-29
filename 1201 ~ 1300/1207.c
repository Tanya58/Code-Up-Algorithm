#include <stdio.h>

int main()
{
    int bar[4] = {0};
    scanf("%d %d %d %d", &bar[0], &bar[1], &bar[2], &bar[3]);

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += bar[i];
    }

    printf("%s", sum == 1 ? "도" : sum == 2 ? "개" : sum == 3 ? "걸" : sum == 4 ? "윷" : "모");

    return 0;
}