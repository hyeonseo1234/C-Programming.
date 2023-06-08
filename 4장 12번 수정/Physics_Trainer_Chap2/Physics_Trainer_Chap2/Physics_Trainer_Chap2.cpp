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


void Excersize_4_12(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    //  ���� ���� ����
    double W;
    double a_1 = 2.50;
    double m;
    double a;
    double g = 9.80;
    double F = 30.0;
    double t = 2.00;
    double v0 = 0;
    double delta_distance;
    double m_2;


    printf("\n\n");
    printf("4-12 \n");
    printf("� ����� ���ڸ� ���� ���� ������ ������ �����ִ� ����̴�. \n");
    printf("���ڿ� ����(���� ����)�� ���Դ� %6.2lf * 10^2 N�̰�, ���� ���� +x�������� %6.2lf N�̴�. \n", a_1, F);
    printf("������ ���� ���·κ��� �����̰�, �������� ���ٰ� �����Ѵ�.\n\n");
    printf("(a) ���ڿ� ������ ���ӵ��� ���ΰ�?\n\n");
    printf("(b) %6.2lf s���� ������ �Ÿ��� ���ΰ�?\n\n", t);


    if (solution == SHOW)
    {

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("���ڿ� ����(���� ����)�� ���Դ� ���ΰ�?\n\n");
        // your code here
        printf("���� ������ W = m * g\n");
        printf("W : ������ ����, m : ����, g : �߷°��ӵ�\n\n");

        printf("W = m * g\n");
        printf("  = %6.2lf * 10^2 N\n", a_1);
        printf("  = m * %6.2lf m/s^2\n\n", g);

        m = (a_1 * (10 * 10) / g);

        printf("m = (%6.2lf * 10^2 N) / %6.2lf m/s^2\n", a_1, g);
        printf("  = %6.2lf kg\n\n", m);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("m = %6.2lf kg\n\n", m);
    }

    if (solution == SHOW)
    {

        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���ڿ� ������ ���ӵ��� ���ΰ�?\n\n");
        // your code here
        printf("���� ������ F = m * a\n");
        printf("F : ��, m : ����, a : ���ӵ�\n\n");

        printf("F = m * a\n");
        printf("  = %6.2lf N\n\n", F);

        a = F / m;

        printf("a = %6.2lf N / %6.2lf kg\n", F, m);
        printf("  = %6.2lf m/s^2\n\n", a);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("a = %6.2lf m/s^2\n\n", a);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) %6.2lf s���� ������ �Ÿ��� ���ΰ�?\n\n", t);
        // your code here
        printf("���� ������ ��x = v0 * t + 1/2 * a * t^2\n");
        printf("��x : �Ÿ���ȭ��, a : ���ӵ�, v0 : �ʱ�ӵ�, t : �ð�\n\n");

        delta_distance = a * 0.5 * (t * t);

        printf("��x = v0 * t + 1/2 * a * t^2\n");
        printf("    = (%6.2lf m/s * %6.2lf s) + ((1/2) * %6.2lf m/s^2 * (%6.2lf s)^2)\n", v0, t, a, t);
        printf("    = %6.2lf m/s^2 * (1/2) * (%6.2lf s)^2\n", a, t);
        printf("    = %6.2lf m\n\n", delta_distance);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x = %6.2lf m\n\n", delta_distance);

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


    Excersize_4_12(Show_Solution, Answer);
}