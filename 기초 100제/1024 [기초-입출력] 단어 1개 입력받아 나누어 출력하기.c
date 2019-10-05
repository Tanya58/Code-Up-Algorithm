#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char word[21] = {0};

    scanf("%20s", &word);
    for (i = 0; i < strlen(word); i++)
    {
        printf("\'%c\'\n", word[i]);
    }
    return 0;
}