#include <stdio.h>

int main()
{
    char letter = 0;
    scanf("%c", &letter);
    switch (letter)
    {
    case 'A':
        printf("best!!!");
        break;
    case 'B':
        printf("good!!");
        break;
    case 'C':
        printf("run!");
        break;
    case 'D':
        printf("slowly~");
        break;
    default:
        printf("what?");
        break;
    }
    return 0;
}
