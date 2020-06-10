#include <stdio.h>
#include <string.h>

int getBaseVal(char symbol)
{
    switch (symbol)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    default:
        return 0;
    }
}

int main()
{
    char aromatic[50] = {0};
    scanf("%s", aromatic);

    int len = 0;
    int A[20] = {0}, R[20] = {0};
    for (int i = 0; i < strlen(aromatic) - 1; i += 2)
    {
        A[i / 2] = aromatic[i] - '0';
        R[i / 2] = getBaseVal(aromatic[i + 1]);
        len++;
    }

    int tmp = 0;
    int result = 0;
    for (int i = 0; i < len - 1; i++)
    {
        tmp = A[i] * R[i];
        result += R[i] < R[i + 1] ? -tmp : tmp;
    }
    result += A[len - 1] * R[len - 1];
    printf("%d", result);

    return 0;
}