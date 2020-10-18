#include <stdio.h>

/*
# 문제 설명
이찬이는 숫자 중에서 62라는 숫자를 가장 좋아한다.
그래서 이찬이는 숫자를 볼때 62라는 숫자가 보이면 좋아한다.
N개의 숫자를 본다고 할때 각 숫자를 보고 이찬이가 좋아한 횟수를 출력하는 프로그램을 작성하시오.

# 입력
숫자의 개수 N이 입력된다. (1<=N<=1,000)
다음 N개의 줄에 int범위의 숫자 K가 입력된다.
    1
    1627260

# 출력
N개의 줄에 이찬이가 K를 보고 좋아한 횟수를 출력하시오.    
    1

# 도움말
1627260
 --
*/

int main()
{
    int n = 0;
    scanf("%d ", &n);

    long long num[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        long long tmp = num[i] * 10;
        while (tmp > 1)
        {
            tmp /= 10;
            if (tmp % 10 != 2)
            {
                continue;
            }
            if ((tmp % 100) / 10 != 6)
            {
                continue;
            }
            cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}