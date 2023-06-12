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


void Excersize_5_7(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    double l = 235;
    double t = 36;
    

    printf("\n\n");
    printf("5-7 \n");
    printf("ó���� �������� ���ϴ����� ���� ��θ� ���� ������ �ӷ����� �������� ������ �ٲپ���. ȣ ABC�� ���̴� %6.2lf m�̰�, �� �Ÿ��� ���� �� %6.2lf s�� �ɷȴ�.\n\n", l, t);
    printf("(a) ���� �ӷ��� ���϶�.\n\n");
    printf("(b) ���� �� B�� ���� �� ���ӵ��� ũ��� ������ ���϶�. \n\n");


    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���� �ӷ��� ���϶�.\n\n");
        // your code here
        
        printf("  =%6.2lf m\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t =%6.2lf m\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ���� �� B�� ���� �� ���ӵ��� ũ��� ������ ���϶�. \n\n");
        // your code here
        
        printf("    = %6.2lf m/s^2\n\n");
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
    printf("========================   Chapter 5     ========================\n");
    printf("=================================================================\n");


    Excersize_5_7(Show_Solution, Answer);
}