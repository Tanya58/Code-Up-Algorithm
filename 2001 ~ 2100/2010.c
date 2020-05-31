#include <stdio.h>
#include <math.h>

// 거듭제곱 : aⁿ = b 에서 b 를 구해야할 경우
// 거듭제곱근 : aⁿ = b 에서 a 를 구해야할 경우
// 로그 : aⁿ = b 에서 n 을 구해야할 경우

int main()
{
    double B = 0, N = 0;
    scanf("%lf %lf", &B, &N);

    int pivot = (int)pow(B, 1.0 / N);

    int t1 = pow(pivot, N) - B;
    t1 = t1 < 0 ? -t1 : t1;

    int t2 = pow(pivot + 1, N) - B;
    t2 = t2 < 0 ? -t2 : t2;

    printf("%d", t1 < t2 ? pivot : pivot + 1);

    return 0;
}