#include <stdio.h>

int n;

char grade(int a)
{
    if (a < 60)
    {
        return 'F';
    }
    else if (a < 70)
    {
        return 'D';
    }
    else if (a < 80)
    {
        return 'C';
    }
    else if (a < 90)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
}

int main()
{
    scanf("%d", &n);
    printf("%c", grade(n));
    return 0;