#include <stdio.h>

int main()
{
    double height = 0, weight = 0;
    scanf("%lf %lf", &height, &weight);

    double avg = (height - 100) * 0.9;
    double bmi = (weight - avg) * 100 / avg;

    printf("%s", bmi > 20 ? "비만" : bmi > 10 ? "과체중" : "정상");

    return 0;
}