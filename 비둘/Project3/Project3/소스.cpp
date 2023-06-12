#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>


#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_6_8(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    
    double m = 2;
    double F = 3;
    double t = 1.35;

    printf("\n\n");
    printf("6-8 \n");
    printf("%6.2lf N�� ������ ������� �������¿� �ִ� ���� %6.2lf kg�� ������ ������ ���� ��������� �а� �ִ�. \n" , F, m);
    printf("�� ���� ������ �� %6.2lf s ���� ������ �� ���� ���ΰ�? \n", t);


    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("���� ������ �� %6.2lf s ���� ������ �� ���� ���ΰ�?\n\n", t);
        // your code here

    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");


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