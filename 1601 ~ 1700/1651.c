#include <stdio.h>
#include <string.h>

int main()
{
    int w = 0, h = 0, n = 0;
    scanf("%d %d %d", &w, &h, &n);

    getchar();

    char str[100][101] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int th = 0; th < h; th++)
        {
            for (int j = 0; j < strlen(str[i]); j++)
            {
                for (int tw = 0; tw < w; tw++)
                {
                    printf("%c", str[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}