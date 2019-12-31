#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = {0};
    scanf("%[^\n]s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 't')
        {
            printf("%d ", i + 1);
        }
    }

    return 0;
}