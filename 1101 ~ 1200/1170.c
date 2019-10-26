#include <stdio.h>

int main()
{
    int grade = 0, class = 0, number = 0;
    scanf("%d %d %d", &grade, &class, &number);
    printf("%d%d%02d", grade, class, number);
    return 0;
}