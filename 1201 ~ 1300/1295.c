#include <stdio.h>
#include <string.h>

int main()
{
    char text[1000] = {0};
    scanf("%s", text);

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] -= 0x20;
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] += 0x20;
        }
    }

    printf("%s", text);
    return 0;
}