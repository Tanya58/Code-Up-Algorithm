#include <stdio.h>
#include <string.h>

int main()
{
    char str[51] = {0};
    scanf("%s", str);

    int rp = 0;
    char result[51] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case '0':
        case '1':
        case '2':
            result[rp++] = str[i];
            break;
        case 'A':
            rp = rp > 1 ? rp - 1 : 0;
            break;
        case 'B':
            rp = rp > 2 ? rp - 2 : 0;
            break;
        case 'C':
            rp = 0;
            break;
        }
    }
    for (int i = 0; i < rp; i++)
    {
        printf("%c", result[i]);
    }

    return 0;
}