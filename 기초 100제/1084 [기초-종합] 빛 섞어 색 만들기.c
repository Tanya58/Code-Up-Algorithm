#include <stdio.h>

int main()
{
    int count = 0;
    int red = 0, green = 0, blue = 0;
    scanf("%d %d %d", &red, &green, &blue);
    for (int i = 0; i < red; i++)
    {
        for (int j = 0; j < green; j++)
        {
            for (int k = 0; k < blue; k++)
            {
                count++;
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    printf("%d", count);
    return 0;
}