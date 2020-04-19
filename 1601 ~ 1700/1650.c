#include <stdio.h>
#include <string.h>

int main()
{
    char codeup[7][100] = {
        " ****  ***  ***   ***** *   * ****",
        "*     *   * *  *  *     *   * *   *",
        "*     *   * *   * *     *   * *   *",
        "*     *   * *   * ****  *   * ****",
        "*     *   * *   * *     *   * *",
        "*     *   * *  *  *     *   * *",
        " ****  ***  ***   *****  ***  *"};

    int w = 0, h = 0;
    scanf("%d %d", &w, &h);

    for (int i = 0; i < 7; i++)
    {
        for (int tw = 0; tw < h; tw++)
        {
            for (int j = 0; j < strlen(codeup[i]); j++)
            {
                for (int th = 0; th < w; th++)
                {
                    printf("%c", codeup[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}