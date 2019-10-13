#include <stdio.h>

int main()
{
    char letter = 'a', end_letter = 0;
    scanf("%c", &end_letter);
    do
    {
        printf("%c ", letter);
        letter++;
    } while (letter <= end_letter);
    return 0;
}