#include <stdio.h>

int main()
{
    char operator= 0;
    int num1 = 0, num2 = 0;
    scanf("%d%c%d", &num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%.2f", (float)num1 / num2);
        break;
    default:
        break;
    }

    return 0;
}