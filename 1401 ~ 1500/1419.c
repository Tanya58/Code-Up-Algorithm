#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char str[100] = {0};
    scanf("%[^\n]s", str);

    for (int i = 0; i < strlen(str);)
    {
        if (str[i++] != 'l')
            continue;
        if (str[i++] != 'o')
            continue;
        if (str[i++] != 'v')
            continue;
        if (str[i++] != 'e')
            continue;
        count++;
    }

    printf("%d", count);

    return 0;
}