#include <stdio.h>

int main()
{
    int menu[5] = {400, 340, 170, 100, 70};
    int sel1 = 0, sel2 = 0;
    scanf("%d %d", &sel1, &sel2);
    printf("%s", menu[sel1 - 1] + menu[sel2 - 1] > 500 ? "angry" : "no angry");
    return 0;
}