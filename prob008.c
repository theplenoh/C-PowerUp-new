#include <stdio.h>
#define NUM_SZ 20

int main()
{
    int input;
    int binaryNum[NUM_SZ];
    int i=0;

    fputs("input: ", stdout);
    scanf("%d", &input);

    while(input > 0)
    {
        binaryNum[i++]=input%2;
        input=input/2;
    }

    for(i--; i>=0; i--)
        printf("%d", binaryNum[i]);
    puts("");

    return 0;
}
