#include <stdio.h>

int main()
{
    char a = 0, b = 0;
    scanf("%c %c", &a, &b);
    for (char i = a; i <= b; i++)
    {
        printf("%c ", i);
    }
    return 0;
}