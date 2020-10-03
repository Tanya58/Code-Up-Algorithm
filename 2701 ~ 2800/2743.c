#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    scanf("%d %d %d", &a, &b, &c);

    char operator= 0;
    if (a + b == c)
    {
        operator= '+';
    }
    else if (a - b == c)
    {
        operator= '-';
    }
    else if (a * b == c)
    {
        operator= '*';
    }
    else if (b != 0 && a / b == c)
    {
        operator= '/';
    }
    else
    {
        printf("NO");
        return 0;
    }

    scanf("%d %d", &d, &e);

    switch (operator)
    {
    case '+':
        printf("%d", d + e);
        break;
    case '-':
        printf("%d", d - e);
        break;
    case '*':
        printf("%d", d * e);
        break;
    case '/':
        printf("%d", d / e);
        break;
    }

    return 0;
}