#include <stdio.h>
#include <string.h>

int main()
{
    char word[20] = {0};
    scanf("%s", word);
    printf("%s", strcmp(word, "IOI") ? "I don\'t care." : "IOI is the International Olympiad in Informatics.");
    return 0;
}