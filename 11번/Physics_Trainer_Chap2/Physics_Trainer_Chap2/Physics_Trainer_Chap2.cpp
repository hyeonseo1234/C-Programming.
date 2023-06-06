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


void Excersize_3_11(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    const double PI = 3.141592653;

    //  ���� ���� ����
    double delta_height = 250; // +rand() % (25 + 1) - 10;
    double a = 3.80; // +rand() % (2 + 1);
    double degree = 30.0; // +rand() % (5 + 1);
    double ay;
    double time_1;
    double t;
    double v0y = 0;



    printf("\n\n");
    printf("3-11 \n");
    printf("��Ű ������%6.2lf m/s^2�� ���ӵ���%6.2lf���� ��縦 ���� ���ӵǰ� �ִ�.\n", a, degree);
    printf("��,��Ű ������ �������¿��� �߶��ϰ� ���ӵ��� �����ϴ�.\n\n");

    printf("(a) ���ӵ��� ���������� ���ΰ�?\n\n");

    printf("(b) �� ��ȭ�� %6.2lf m���, �� ������ ��� �Ʒ��� �����ϴµ� �ɸ��� �ð��� ���ΰ�? \n\n", delta_height);

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���ӵ��� ���������� ���ΰ�?\n\n");
        // your code here
        printf("���� ������ ay = a * sin��\n");
        printf("ay : ���ӵ��� ��������, a : ���ӵ�\n\n");

        ay = a * (sin(degree * PI / 180));

        printf("ay = %6.2lf m/s^2 * sin%6.2lf��\n", a, degree);
        printf("   = %6.2lf m/s^2\n\n", ay);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("ay = %6.2lf m/s^2\n\n", ay);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� ��ȭ�� %6.2lf m���, �� ������ ��� �Ʒ��� �����ϴµ� �ɸ��� �ð��� ���ΰ�? \n\n", delta_height);
        // your code here   
        printf("���� ������ ��y = v0y * t + 1/2 * a * t^2\n");
        printf("��y = ���̺�ȭ��, v0y : y�� ó���ӵ�, a : ���ӵ�, t : �ð�\n\n");

        printf("��y = v0y * t + 1/2 * a * t^2\n");
        printf("%6.2lf m = (%6.2lf * t) + (1/2 *%6.2lf m/s^2 * t^2)\n\n", delta_height, v0y, ay);

        time_1 = ((2 * delta_height) / (ay));

        printf("t^2 = (%6.2lf + (2 * %6.2lf m)) / (%6.2lf m/s^2)\n", v0y, delta_height, ay);
        printf("    = %6.2lf s\n\n", time_1);

        t = sqrt((2 * delta_height) / (ay)); 

        printf("t = sqrt((%6.2lf + (2 * %6.2lf m)) / (%6.2lf m/s^2))\n", delta_height, ay);
        printf("  = %6.2lf s\n\n", t);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

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
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");


    Excersize_3_11(Show_Solution, Answer);
}