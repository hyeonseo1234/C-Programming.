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


void Excersize_5_7(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));
    double l = 235;
    double t = 36;
    

    printf("\n\n");
    printf("5-7 \n");
    printf("처음에 동쪽으로 향하던차가 원형 경로를 따라 일정한 속력으로 북족으로 방향을 바꾸었다. 호 ABC의 길이는 %6.2lf m이고, 그 거리를 도는 데 %6.2lf s가 걸렸다.\n\n", l, t);
    printf("(a) 차의 속력을 구하라.\n\n");
    printf("(b) 차가 점 B에 있을 때 가속도의 크기와 방향을 구하라. \n\n");


    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 차의 속력을 구하라.\n\n");
        // your code here
        
        printf("  =%6.2lf m\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("t =%6.2lf m\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 차가 점 B에 있을 때 가속도의 크기와 방향을 구하라. \n\n");
        // your code here
        
        printf("    = %6.2lf m/s^2\n\n");
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


    Excersize_5_7(Show_Solution, Answer);
}