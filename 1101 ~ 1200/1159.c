#include <stdio.h>

int main()
{
    int location = 0;
    scanf("%d", &location);
    if ((location >= 50 && location <= 70) || (location % 6 == 0))
    {
        printf("win");
    }
    else
    {
        printf("lose");
    }
    return 0;
}