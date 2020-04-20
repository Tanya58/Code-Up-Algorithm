#include <stdio.h>
#include <string.h>

char getCaesar(char a, char n)
{
    char ret = a;
    if (a >= 'A' && a <= 'Z')
    {
        ret = (a + n - 'A') % 26;
        ret = ret < 0 ? ret + 'Z' + 1 : ret + 'A';
    }
    else if (a >= 'a' && a <= 'z')
    {
        ret = (a + n - 'a') % 26;
        ret = ret < 0 ? ret + 'z' + 1 : ret + 'a';
    }
    return ret;
}

int main()
{
    char str[201] = {0};
    fgets(str, 200, stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = getCaesar(str[i], -3);
    }
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}