#include <stdio.h>

int main()
{
    double location = 0;
    scanf("%lf", &location);
    printf("%s", location >= 50 && location <= 60 ? "win" : "lose");
    return 0;
}