#include <stdio.h>
#include <string.h>

// Calculus : 미적분
// differentiation : 미분
// integration : 적분

void differentiation(char *expr)
{
    int d = 0, x = 0;
    for (int i = 0; i < strlen(expr); i++)
    {
        if (expr[i] >= '0' && expr[i] <= '9')
        {
            d = d * 10 + expr[i] - '0';
        }
        else if (expr[i] == '-' || expr[i] == '+')
        {
            printf("%c", expr[i]);
            d = 0;
            x = 0;
        }
        else
        {
            i += 3;
            x = expr[i] - '0';
            printf("%d*x^%d", d * x, x - 1);
        }
    }
    printf(" ");
}

void integration(char *expr)
{
    int d = 0, x = 0;
    for (int i = 0; i < strlen(expr); i++)
    {
        if (expr[i] >= '0' && expr[i] <= '9')
        {
            d = d * 10 + expr[i] - '0';
        }
        else if (expr[i] == '-' || expr[i] == '+')
        {
            printf("%c", expr[i]);
            d = 0;
            x = 0;
        }
        else
        {
            i += 3;
            x = expr[i] - '0';
            printf("%d*x^%d", d / (x + 1), x + 1);
        }
    }
    printf("+c\n");
}

void Calculus()
{
    char expression[100] = {0};
    scanf("%s", expression);

    differentiation(expression);
    integration(expression);
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        Calculus();
    }

    return 0;
}