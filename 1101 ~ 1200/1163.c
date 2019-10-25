#include <stdio.h>

int main()
{
    int year = 0, month = 0, day = 0;
    scanf("%d %d %d", &year, &month, &day);
    printf("%s", (((year + month + day) % 1000) / 100) % 2 ? "그럭저럭" : "대박");
    return 0;
}