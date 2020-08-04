#include <stdio.h>
#define PI 3.14

int main()
{
    double r;

    fputs("반지름 입력: ", stdout);
    scanf("%lf", &r);

    printf("원의 넓이: %lf\n", r*r*PI);

    return 0;
}
