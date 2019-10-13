#include <stdio.h>

int main()
{
    char name[20] = {0};
    int age = 0;
    char dept_code = 0;
    float security_key = 0;

    scanf("%s", name);
    scanf("%d\n%c\n%f", &age, &dept_code, &security_key);

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%c\n", dept_code);
    printf("%g", security_key);
    return 0;
}