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


void Excersize_6_22(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));

    double angle = 60;

    printf("\n\n");
    printf("6-22 \n");
    printf("���� l�� �ǿ� ������ m�� �߸� �Ŵް� ���� �ٸ� �� ���� �� O�� �����Ͽ���.\n");
    printf("���� �������� %6.2lf���� ���� �̷�� �Ǵ� �� A���� �߸� ��� �÷ȴٰ� ������ ���� ��\n\n", angle);
    printf("(a) �߰� �� B�� ����ϴ� ������ �ӷ��� ���ΰ�?\n\n");
    printf("(b) �� �ߴ� �ݴ��� �� �� �Ǵ� �� ���� �ö󰡰ڴ°�? ��, ������ �����̳� ������ �����Ѵ�.\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �߰� �� B�� ����ϴ� ������ �ӷ��� ���ΰ�?\n\n");
        // your code here
        
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t =%6.2lf m\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� �ߴ� �ݴ��� �� �� �Ǵ� �� ���� �ö󰡰ڴ°�? ��, ������ �����̳� ������ �����Ѵ�.\n\n");
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


    Excersize_6_22(Show_Solution, Answer);
}