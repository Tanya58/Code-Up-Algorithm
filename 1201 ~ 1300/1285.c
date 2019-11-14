#include <stdio.h>

int main()
{
    int result = 0, num = 0;
    char op = 0;
    scanf("%d", &result);

    while (scanf("%c", &op))
    {
        if (op == '=')
            break;
        scanf("%d", &num);
        if (op == '+')
        {
            result += num;
        }
        else if (op == '-')
        {
            result -= num;
        }
        else if (op == '*')
        {
            result *= num;
        }
        else if (op == '/')
        {
            result /= num;
        }
    }
    printf("%d", result);
    return 0;
}