#include <stdio.h>
#include <string.h>

int main()
{
    char num1[101] = {0}, num2[101] = {0};
    scanf("%s %s", num1, num2);

    if (strlen(num1) < strlen(num2))
    {
        printf("%s %s", num1, num2);
    }
    else if (strlen(num1) == strlen(num2) && strcmp(num1, num2) < 0)
    {
        printf("%s %s", num1, num2);
    }
    else
    {
        printf("%s %s", num2, num1);
    }

    return 0;
}