#include <stdio.h>

int main()
{
    char alphabet[26] = {0};
    char str[90] = {0};
    fgets(str, 90, stdin);

    for (int i = 0; i < 90; i++)
    {
        if (str[i] < 'a' || str[i] > 'z')
            continue;
        alphabet[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c:%d\n", 'a' + i, alphabet[i]);
    }

    return 0;
}