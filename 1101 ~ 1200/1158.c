#include <stdio.h>

int main()
{
    double location = 0;
    scanf("%lf", &location);
    if ((location >= 30 && location <= 40) || (location >= 60 && location <= 70))
    {
        printf("win");
    }
    else
    {
        printf("lose");
    }
    return 0;
}