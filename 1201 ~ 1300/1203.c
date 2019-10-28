#include <stdio.h>

int main()
{
    int score = 0;
    scanf("%d", &score);
    printf("%s", score > 10 ? score > 20 ? "비만" : "과체중" : "정상");
    return 0;
}