#include <stdio.h>

int sumResult(const int* arr, const int arrSz)
{
    int i;
    int sum=0;

    for(i=0; i<arrSz; i++)
    {
        sum+=arr[i];
    }

    return sum;
}

int main()
{
    int arr1[3]={5, 10, 15};
    int arr2[5]={1, 2, 3, 4, 5};

    printf("%d\n", sumResult(arr1, sizeof(arr1)/sizeof(int)));
    printf("%d\n", sumResult(arr2, sizeof(arr2)/sizeof(int)));

    return 0;
}
