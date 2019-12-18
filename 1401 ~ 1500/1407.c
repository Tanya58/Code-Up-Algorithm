#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = {0};
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
            printf("%c", str[i]);
    }

    return 0;
}