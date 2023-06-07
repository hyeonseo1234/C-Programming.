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


void Excersize_3_25(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));
    const double PI = 3.141592653;

    //  변수 선언 지역
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
    printf("야구 선수가 지면으로부터 %6.2lf m의 높이에서 수평 위 %6.2lf˚방향으로 초속도 %6.2lf m/s로 야구공을 던졌다. \n", height_0, degree, velocity_0);
    printf("이 선수의 발아래에서 공이 떨어지는 지면까지의 거리는 얼마인가?\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("관련 공식은 v0y = v0 * sinθ\n");
        printf("cosθ : 삼각함수에서 x성분, sinθ : 삼각함수에서 y성분\n");
        printf("v0y : y의 처음속도, a : 가속도\n\n");

        v0y = velocity_0 * (sin(degree * PI / 180));

        printf("v0y = v0 * sinθ\n");
        printf("sin%6.2lf˚ = cos%6.2lf˚\n\n", degree, degree);

        printf("v0y = %6.2lf m/s * sin%6.2lf˚\n", velocity_0, degree);
        printf("    = %6.2lf m/s\n\n", v0y);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("v0y = %6.2lf m/s\n\n", v0y);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here   
        printf("관련 공식은 y = y0 + v0y * t + 1/2 * g * t^2\n");
        printf("y = 나중높이, y0 : 처음높이, v0y : y의 처음속도, g : 중력가속도\n");
        printf("t : 시간, cosθ : 삼각함수에서 x성분, sinθ : 삼각함수에서 y성분\n\n");

        printf("중력가속도는 아래 방향이므로 -%6.2lfm/s^2입니다.\n\n", g);

        printf("y = y0 + v0y * t + 1/2 * a * t^2\n\n");
        printf("%6.2lf m = (%6.2lf m) + (%6.2lf m/s * sin%6.2lf˚ * t) + ((1 / 2) * (-%6.2lf m/s^2 ) * t^2)\n\n", height, height_0, velocity_0, degree, g);

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
        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
    }

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("관련 공식은 Δx = v0x * t\n");
        printf("Δx = 거리변화량, v0x : x의 처음속도, t : 시간, cosθ : 삼각함수에서 x성분\n\n");

        delta_x = velocity_0 * (cos(degree * PI / 180)) * time_1;

        printf("Δx = v0x * t\n");
        printf("   = v0 * cosθ * t\n");
        printf("   = %6.2lf m/s^2 * cos%6.2lf˚ * %6.2lf s\n", velocity_0, degree, time_1);
        printf("   = %6.2lf m/s^2\n\n", delta_x);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx =%6.2lf m\n\n", delta_x);

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
