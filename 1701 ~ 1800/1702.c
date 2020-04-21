#include <stdio.h>

int main()
{
    int grade = 0, class = 0, number = 0;
    scanf("%d %d %d", &grade, &class, &number);

    printf("%d%d%d", grade, class, number);
    if (class % 2 == 0)
    {
        printf(" %d%d%d", grade, class, number);
    }
    return 0;
}