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


void Excersize_5_21(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));

    printf("\n\n");
    printf("5-21 \n");
    printf("� ������ �°��� ������ ���ö ������ �̿��Ͽ� �ڽ��� ���Ը� �����Ϸ��� �Ѵ�. ������ �����Դ� 58 kg���̶�� �Ѵ�. \n");
    printf("���� �� ��� ���ö������ ����Ű�� ������ ���ΰ�? \n\n");
    printf("(a) �°��Ⱑ 6.0 m/s�� ������ �ӷ����� ���� �ö� ��\n\n");
    printf("(b) �°��Ⱑ 6.0 m/s�� ������ ���ӵ��� �Ʒ��� ������ �� \n\n");
    printf("(c) �°��Ⱑ 0.33g�� ���ӵ��� ���� �ö� ��\n\n");
    printf("(d) �°��Ⱑ 0.33g�� ���ӵ��� �Ʒ��� ������ ��\n\n");
    printf("(e) �°��Ⱑ �������� �� ��\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �°��Ⱑ 6.0 m/s�� ������ �ӷ����� ���� �ö� ��\n\n");
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
        printf("(b) �°��Ⱑ 6.0 m/s�� ������ ���ӵ��� �Ʒ��� ������ �� \n\n");
        // your code here
        
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x = %6.2lf m/s^2\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) �°��Ⱑ 0.33g�� ���ӵ��� ���� �ö� ��\n\n");
        // your code here
        


    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(d) �°��Ⱑ 0.33g�� ���ӵ��� �Ʒ��� ������ ��\n\n");
        // your code here


    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(e) �°��Ⱑ �������� �� ��\n\n");
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
    printf("========================   Chapter 5     ========================\n");
    printf("=================================================================\n");


    Excersize_5_21(Show_Solution, Answer);
}