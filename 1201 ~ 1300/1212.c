#include <stdio.h>

int main()
{
    int len[3] = {0};
    scanf("%d %d %d", &len[0], &len[1], &len[2]);

    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        if (len[i] >= len[(i + 1) % 3] && len[i] >= len[(i + 2) % 3])
        {
            if (len[i] < len[(i + 1) % 3] + len[(i + 2) % 3])
            {
                flag = 1;
                break;
            }
        }
    }
    printf("%s", flag ? "yes" : "no");
    return 0;
}