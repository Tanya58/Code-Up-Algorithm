#include <stdio.h>

int main()
{
    int code1 = 0, code2 = 0;
    scanf("%d %d", &code1, &code2);

    int age = 113 - code1 / 10000;
    if (code2 / 1000000 > 2)
    {
        age -= 100;
    }

    int gender = code2 / 1000000;
    printf("%d %c", age, gender % 2 ? 'M' : 'F');

    return 0;
}