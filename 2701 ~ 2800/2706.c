#include <stdio.h>
#include <string.h>

int convert(char *arr, int len)
{
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        num = num * 10;
        num += *(arr + i) - '0';
    }
    return num;
}

int f(char *arr, int len)
{
    if (len < 2)
    {
        return convert(arr, len);
    }
    int num1 = convert(arr, 1) + f(arr + 1, len - 1);
    int num2 = convert(arr, 2) + f(arr + 2, len - 2);
    return num1 > num2 ? num1 : num2;
}

int main()
{
    char num[11] = {0};
    scanf("%s", num);
    printf("%d", f(num, strlen(num)));
    return 0;
}