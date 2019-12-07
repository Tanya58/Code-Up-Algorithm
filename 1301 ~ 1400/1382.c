#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 2; j < 6; j++)
        {
            printf("%d x %d = %2d\t", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}