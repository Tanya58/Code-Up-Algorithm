#include <stdio.h>

int main()
{
    int i = 0;
    char word[21] = {0};

    scanf("%20s", &word);
    for (i = 0; word[i] != '\0'; i++)
    {
        printf("\'%c\'\n", word[i]);
    }
    return 0;
}