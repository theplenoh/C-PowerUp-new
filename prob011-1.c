#include <stdio.h>

int main()
{
    int i, n;
    int sum_odd=0;
    int sum_even=0;

    fputs("n: ", stdout);
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        if(i%2) // odd numbers
            sum_odd+=i;
        else // even numbers
            sum_even+=i;
    }

    printf("홀수 합: %d\n", sum_odd);
    printf("짝수 합: %d\n", sum_even);

    return 0;
}
