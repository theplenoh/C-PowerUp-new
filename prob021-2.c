#include <stdio.h>

int sumArr3(int arr[][2])
{
    int i, j;
    int sum=0;

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum;
}

int sumArr4(int arr[][3])
{
    int i, j;
    int sum=0;

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum;
}

int main()
{
    int arr3[2][2]={1, 3, 5, 7};
    int arr4[2][3]={1, 2, 3, 4, 5, 6};

    printf("%d\n", sumArr3(arr3));
    printf("%d\n", sumArr4(arr4));

    return 0;
}
