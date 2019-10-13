#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    scanf("%d.%06d", &num1, &num2);
    printf("%d\n%d", num1, num2);
    return 0;
}