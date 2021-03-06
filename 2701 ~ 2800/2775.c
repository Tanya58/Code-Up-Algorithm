#include <stdio.h>
/*
# 문제 설명
메이플스토리의 모든 보스 몬스터에는 각각의 방어율이 존재한다.
몬스터 방어율 무시 옵션은 보스몬스터의 방어율을 해당 %만큼 무시하게 하는 옵션이다.
예를 들어 방어율이 300인 보스 몬스터에게 방어율 무시 옵션이 80%인 유저는 100−(300−300∗0.80)=40 [단위 : %] 로, 자신의 데미지의 40%밖에 들어가지 않는다.

보스몬스터의 체력과 방어율[단위 : %], 제한시간 [단위 : 분]이 주어지고, 유저의 초당 데미지가 주어질 때, 제한시간 동안 계속 공격할 수 있을 때 보스를 잡을 수 있는 유저의 최소 방어율 무시율을 출력하시오. 만약 잡지 못한다면, X를 출력하시오.

# 입력
정수 형태의 보스몬스터의 체력 H와 방어율 S, 제한시간 t가 공백을 두고 첫 줄에 입력된다.
다음 줄에 유저의 데미지 D가 입력된다. (102≤H≤109, 30≤S≤500, 1≤t≤30, 1≤D≤109)

    181074501 146 26
    898281246

# 출력
유저가 보스를 잡을 수 있는 최소 방어율 무시율이 소숫점 6째 자리 까지 출력된다. 
단, 최소 방어율 무시율이 필요 없이 무조건 잡을 수 있다면 O를 출력하고 방어율 무시율이 100이 넘어도 못 잡는다면 X를 출력한다.

    32.037879

# 도움말
모두 실수로 두면 편합니다.
*/

int main()
{
    double H = 0, S = 0, t = 0;
    scanf("%lf %lf %lf", &H, &S, &t);

    double D = 0;
    scanf("%lf", &D);

    double X = (1 - (100 - (100 * H) / (D * t)) / S) * 100;

    if (X > 100)
    {
        printf("X");
    }
    else if (X < 1)
    {
        printf("O");
    }
    else
    {
        printf("%.6lf", X);
    }

    return 0;
}