#include <stdio.h>
#include <string.h>

void soundex(char *str, char *buf)
{
    int len = 1;
    // rule 1
    buf[0] = str[0];
    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'h' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'w' || str[i] == 'y')
        {
            continue;
        }
        // rule 2
        if (str[i] == 'b' || str[i] == 'f' || str[i] == 'p' || str[i] == 'v')
        {
            buf[len++] = '1';
        }
        else if (str[i] == 'c' || str[i] == 'g' || str[i] == 'j' || str[i] == 'k' || str[i] == 'q' || str[i] == 's' || str[i] == 'x' || str[i] == 'z')
        {
            buf[len++] = '2';
        }
        else if (str[i] == 'd' || str[i] == 't')
        {
            buf[len++] = '3';
        }
        else if (str[i] == 'l')
        {
            buf[len++] = '4';
        }
        else if (str[i] == 'm' || str[i] == 'n')
        {
            buf[len++] = '5';
        }
        else if (str[i] == 'r')
        {
            buf[len++] = '6';
        }
        // rule 3
        while (i < strlen(str) - 1 && str[i] == str[i + 1])
        {
            i++;
        }
        // rule 4
        if (len >= 4)
        {
            break;
        }
    }
    // rule 4
    while (len < 4)
    {
        buf[len++] = '0';
    }
}

int main()
{
    char str[51] = {0};
    scanf("%s", str);

    char buf[50] = {0};
    soundex(str, buf);
    printf("%s", buf);
    return 0;
}