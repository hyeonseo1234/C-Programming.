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


void Excersize_5_21(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));

    printf("\n\n");
    printf("5-21 \n");
    printf("어떤 여성이 승강기 내에서 용수철 저울을 이용하여 자신의 무게를 측정하려고 한다. 여성의 몸무게는 58 kg중이라고 한다. \n");
    printf("다음 각 경우 용수철저울이 가리키는 눈금은 얼마인가? \n\n");
    printf("(a) 승강기가 6.0 m/s의 일정한 속력으로 위로 올라갈 때\n\n");
    printf("(b) 승강기가 6.0 m/s의 일정한 가속도로 아래로 내려갈 때 \n\n");
    printf("(c) 승강기가 0.33g의 가속도로 위로 올라갈 때\n\n");
    printf("(d) 승강기가 0.33g의 가속도로 아래로 내려갈 때\n\n");
    printf("(e) 승강기가 자유낙하 할 때\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 승강기가 6.0 m/s의 일정한 속력으로 위로 올라갈 때\n\n");
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
        printf("(b) 승강기가 6.0 m/s의 일정한 가속도로 아래로 내려갈 때 \n\n");
        // your code here
        
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx = %6.2lf m/s^2\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 승강기가 0.33g의 가속도로 위로 올라갈 때\n\n");
        // your code here
        


    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(d) 승강기가 0.33g의 가속도로 아래로 내려갈 때\n\n");
        // your code here


    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(e) 승강기가 자유낙하 할 때\n\n");
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
    printf("========================   Chapter 5     ========================\n");
    printf("=================================================================\n");


    Excersize_5_21(Show_Solution, Answer);
}