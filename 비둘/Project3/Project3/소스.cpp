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


void Excersize_6_8(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));
    
    double m = 2;
    double F = 3;
    double t = 1.35;

    printf("\n\n");
    printf("6-8 \n");
    printf("%6.2lf N의 일정한 수평력이 정지상태에 있는 질량 %6.2lf kg인 벽돌을 마찰이 없는 수평면으로 밀고 있다. \n" , F, m);
    printf("이 힘이 가해진 후 %6.2lf s 동안 벽돌이 한 일은 얼마인가? \n", t);


    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("힘이 가해진 후 %6.2lf s 동안 벽돌이 한 일은 얼마인가?\n\n", t);
        // your code here

    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");


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
    printf("========================   Chapter 6     ========================\n");
    printf("=================================================================\n");


    Excersize_6_8(Show_Solution, Answer);
}