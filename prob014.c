#include <stdio.h>
#define ARR_SZ 5

int main()
{
    int arr[ARR_SZ];
    int i, j;
    int temp;

    for(i=0; i<ARR_SZ; i++)
    {
        printf("숫자 %d입력: ", i+1);
        scanf("%d", &arr[i]);
    }


    for(i=0; i<ARR_SZ-1; i++)
    {
        for(j=0; j<(ARR_SZ)-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("출력: ");
    for(i=0; i<ARR_SZ; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
