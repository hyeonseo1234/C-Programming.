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


void Excersize_3_25(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    const double PI = 3.141592653;

    //  ���� ���� ����
    double height = 0; // +rand() % (25 + 1) - 10;
    double g = 9.80;
    double degree = 45; // +rand() % (5 + 1);
    double velocity_0 = 28;
    double v0y;
    double height_0 = 1.6;
    double delta_x;
    double time_1;
    double a;
    double b;
    double c;
    double d;
    double e;





    printf("\n\n");
    printf("3-25 \n");
    printf("�߱� ������ �������κ��� %6.2lf m�� ���̿��� ���� �� %6.2lf���������� �ʼӵ� %6.2lf m/s�� �߱����� ������. \n", height_0, degree, velocity_0);
    printf("�� ������ �߾Ʒ����� ���� �������� ��������� �Ÿ��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        printf("���� ������ v0y = v0 * sin��\n");
        printf("cos�� : �ﰢ�Լ����� x����, sin�� : �ﰢ�Լ����� y����\n");
        printf("v0y : y�� ó���ӵ�, a : ���ӵ�\n\n");

        v0y = velocity_0 * (sin(degree * PI / 180));

        printf("v0y = v0 * sin��\n");
        printf("sin%6.2lf�� = cos%6.2lf��\n\n", degree, degree);

        printf("v0y = %6.2lf m/s * sin%6.2lf��\n", velocity_0, degree);
        printf("    = %6.2lf m/s\n\n", v0y);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("v0y = %6.2lf m/s\n\n", v0y);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here   
        printf("���� ������ y = y0 + v0y * t + 1/2 * g * t^2\n");
        printf("y = ���߳���, y0 : ó������, v0y : y�� ó���ӵ�, g : �߷°��ӵ�\n");
        printf("t : �ð�, cos�� : �ﰢ�Լ����� x����, sin�� : �ﰢ�Լ����� y����\n\n");

        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2�Դϴ�.\n\n", g);

        printf("y = y0 + v0y * t + 1/2 * a * t^2\n\n");
        printf("%6.2lf m = (%6.2lf m) + (%6.2lf m/s * sin%6.2lf�� * t) + ((1 / 2) * (-%6.2lf m/s^2 ) * t^2)\n\n", height, height_0, velocity_0, degree, g);

        a = 0.5 * (-g);
        b = v0y;
        c = height_0;

        printf("at^2 + bt + c = 0\n", a, b, c);
        printf("%6.2lf t^2 + %6.2lf t + %6.2lf = 0\n\n", a, b, c);

        d = b * b - 4.0 * a * c;
        e = sqrt(d);
        time_1 = (-b - e) / (2.0 * a);
        printf("t1 = %6.2lf s, t2 = %6.2lf s\n\n", (-b - e) / (2.0 * a), (-b + e) / (2.0 * a));
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t = %6.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
    }

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        printf("���� ������ ��x = v0x * t\n");
        printf("��x = �Ÿ���ȭ��, v0x : x�� ó���ӵ�, t : �ð�, cos�� : �ﰢ�Լ����� x����\n\n");

        delta_x = velocity_0 * (cos(degree * PI / 180)) * time_1;

        printf("��x = v0x * t\n");
        printf("   = v0 * cos�� * t\n");
        printf("   = %6.2lf m/s^2 * cos%6.2lf�� * %6.2lf s\n", velocity_0, degree, time_1);
        printf("   = %6.2lf m/s^2\n\n", delta_x);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x =%6.2lf m\n\n", delta_x);

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


    Excersize_3_25(Show_Solution, Answer);
}
