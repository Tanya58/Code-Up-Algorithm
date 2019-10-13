#include <stdio.h>

int main()
{
    int score = 0;
    scanf("%d", &score);
    if (score >= 90)
        printf("A");
    else if (score >= 70)
        printf("B");
    else if (score >= 40)
        printf("C");
    else
        printf("D");
    return 0;
}
