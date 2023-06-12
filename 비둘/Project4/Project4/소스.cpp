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


void Excersize_6_22(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));

    double angle = 60;

    printf("\n\n");
    printf("6-22 \n");
    printf("길이 l의 실에 질량이 m의 추를 매달고 실의 다른 쪽 끝을 점 O에 고정하였다.\n");
    printf("실이 연직선과 %6.2lf˚의 각을 이루게 되는 점 A까지 추를 들어 올렸다가 가만히 놓을 때\n\n", angle);
    printf("(a) 추가 점 B를 통과하는 순간의 속력은 얼마인가?\n\n");
    printf("(b) 이 추는 반대쪽 몇 도 되는 곳 까지 올라가겠는가? 단, 공기의 저항이나 마찰은 무시한다.\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 추가 점 B를 통과하는 순간의 속력은 얼마인가?\n\n");
        // your code here
        
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("t =%6.2lf m\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 이 추는 반대쪽 몇 도 되는 곳 까지 올라가겠는가? 단, 공기의 저항이나 마찰은 무시한다.\n\n");
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


    Excersize_6_22(Show_Solution, Answer);
}