#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000] = {0};
    scanf("%s", str);

    int open = 0;
    int close = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
            open++;
        if (str[i] == ')')
            close++;
    }
    printf("%d %d", open, close);

    return 0;
}