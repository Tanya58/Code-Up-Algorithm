#include <stdio.h>
#include <string.h>

int main()
{
    char code[27] = {0};
    scanf("%s", code);

    char enc[101] = {0};
    scanf("%s", enc);

    for (int i = 0; i < strlen(enc); i++)
    {
        char dec = 0;
        for (int j = 0; j < 26; j++)
        {
            if (enc[i] == code[j])
            {
                dec = 'a' + j;
                break;
            }
        }
        printf("%c", dec);
    }

    return 0;
}