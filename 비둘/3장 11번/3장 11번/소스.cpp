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


void Excersize_3_11(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));

    //  변수 선언 지역
    double delta_height = 250 +rand() % (15 + 1) - 5;
    double a = 3.80 +rand() % (2 + 1);
    double angle = 30.0 +rand() % (10 + 1);
    double ay;
    double time_1;
    double t;
    double v0y = 0;



    printf("\n\n");
    printf("3-11 \n");
    printf("스키 선수가%6.2lf m/s^2의 가속도로%6.2lf˚의 경사를 따라 가속되고 있다.\n", a, angle);
    printf("단,스키 선수는 정지상태에서 추락하고 가속도는 일정하다.\n\n");

    printf("(a) 가속도의 수직성분은 얼마인가?\n\n");

    printf("(b) 고도 변화가 %6.2lf m라면, 이 선수가 언덕 아래에 도달하는데 걸리는 시간은 얼마인가? \n\n", delta_height);

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 가속도의 수직성분은 얼마인가?\n\n");
        // your code here
        printf("관련 공식은 ay = a * sinθ\n");
        printf("ay: 가속도의 수직성분, a: 가속도, sinθ: 삼각함수에서 y 성분\n\n");

        ay = a * (sin(DEG2RAD(angle)));
        printf("ay = a * sinθ\n");
        printf("   = %6.2lf m/s^2 * sin%6.2lf˚\n", a, angle);
        printf("   = %6.2lf m/s^2\n\n", ay);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("ay = %6.2lf m/s^2\n\n", ay);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 고도 변화가 %6.2lf m라면, 이 선수가 언덕 아래에 도달하는데 걸리는 시간은 얼마인가? \n\n", delta_height);
        // your code here   
        printf("관련 공식은 Δy = v0y * t + 1/2 * a * t^2\n");
        printf("v0y: y의 초기속도, a: 가속도, t: 시간\n");
        printf("Δy = y - y0, y: 나중거리, y0: 초기거리\n\n");

        printf("Δy = v0y * t + 1/2 * a * t^2\n");
        printf("%6.2lf m = (%6.2lf * t) + ((1/2) *%6.2lf m/s^2 * t^2)\n\n", delta_height, v0y, ay);

        time_1 = ((2 * delta_height) / (ay));

        printf("t^2 = (%6.2lf + (2 * %6.2lf m)) / (%6.2lf m/s^2)\n", v0y, delta_height, ay);
        printf("    = %6.2lf s\n\n", time_1);

        t = sqrt((2 * delta_height) / (ay));

        printf("t = √((%6.2lf + (2 * %6.2lf m)) / (%6.2lf m/s^2))\n", v0y, delta_height, ay);
        printf("  = %6.2lf s\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lf s\n\n", t);

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
    printf("========================   Chapter 3     ========================\n");
    printf("=================================================================\n");


    Excersize_3_11(Show_Solution, Answer);
}