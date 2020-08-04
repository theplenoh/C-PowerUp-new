#include <stdio.h>

int main()
{
    int i;
    int input;
    int min, max;
    int sum = 0;
    double avg;

    for(i=0; i<7; i++)
    {
        fputs("정수형 데이터 입력: ", stdout);
        scanf("%d", &input);

        if(i==0)
        {
            min = input;
            max = input;
        }
        if(input<min)
            min = input;
        if(input>max)
            max = input;
        sum+=input;
    }
    avg=(double)sum/7.0;

    printf("최대값: %d\n", max);
    printf("최소값: %d\n", min);
    printf("전체합: %d\n", sum);
    printf("평  균: %lf\n", avg);

    return 0;
}
