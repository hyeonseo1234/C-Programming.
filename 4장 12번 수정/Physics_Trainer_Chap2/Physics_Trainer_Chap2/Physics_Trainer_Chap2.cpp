#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>



#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_4_12(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));
    //  변수 선언 지역
    double W;
    double a_1 = 2.50;
    double m;
    double a;
    double g = 9.80;
    double F = 30.0;
    double t = 2.00;
    double v0 = 0;
    double delta_distance;
    double m_2;


    printf("\n\n");
    printf("4-12 \n");
    printf("어떤 사람이 상자를 실은 작은 수레를 끈으로 끌고있는 모습이다. \n");
    printf("상자와 수레(비퀴 포함)의 무게는 %6.2lf * 10^2 N이고, 끄는 힘은 +x방향으로 %6.2lf N이다. \n", a_1, F);
    printf("수레는 정지 상태로부터 움직이고, 마찰력은 없다고 가정한다.\n\n");
    printf("(a) 상자와 수레의 가속도는 얼마인가?\n\n");
    printf("(b) %6.2lf s동안 움직인 거리는 얼마인가?\n\n", t);


    if (solution == SHOW)
    {

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("상자와 수레(비퀴 포함)의 무게는 얼마인가?\n\n");
        // your code here
        printf("관련 공식은 W = m * g\n");
        printf("W : 무게의 단위, m : 질량, g : 중력가속도\n\n");

        printf("W = m * g\n");
        printf("  = %6.2lf * 10^2 N\n", a_1);
        printf("  = m * %6.2lf m/s^2\n\n", g);

        m = (a_1 * (10 * 10) / g);

        printf("m = (%6.2lf * 10^2 N) / %6.2lf m/s^2\n", a_1, g);
        printf("  = %6.2lf kg\n\n", m);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("m = %6.2lf kg\n\n", m);
    }

    if (solution == SHOW)
    {

        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 상자와 수레의 가속도는 얼마인가?\n\n");
        // your code here
        printf("관련 공식은 F = m * a\n");
        printf("F : 힘, m : 질량, a : 가속도\n\n");

        printf("F = m * a\n");
        printf("  = %6.2lf N\n\n", F);

        a = F / m;

        printf("a = %6.2lf N / %6.2lf kg\n", F, m);
        printf("  = %6.2lf m/s^2\n\n", a);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("a = %6.2lf m/s^2\n\n", a);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) %6.2lf s동안 움직인 거리는 얼마인가?\n\n", t);
        // your code here
        printf("관련 공식은 Δx = v0 * t + 1/2 * a * t^2\n");
        printf("Δx : 거리변화량, a : 가속도, v0 : 초기속도, t : 시간\n\n");

        delta_distance = a * 0.5 * (t * t);

        printf("Δx = v0 * t + 1/2 * a * t^2\n");
        printf("    = (%6.2lf m/s * %6.2lf s) + ((1/2) * %6.2lf m/s^2 * (%6.2lf s)^2)\n", v0, t, a, t);
        printf("    = %6.2lf m/s^2 * (1/2) * (%6.2lf s)^2\n", a, t);
        printf("    = %6.2lf m\n\n", delta_distance);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx = %6.2lf m\n\n", delta_distance);

        printf("=================================================================\n");
        printf("\n\n\n");

    }

}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");


    Excersize_4_12(Show_Solution, Answer);
}