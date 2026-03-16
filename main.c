#include<stdio.h>

int main()
{
    int arr[3], i;

    printf("Enter 3 numbers:\n");

    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Cube of numbers:\n");

    for(i=0;i<3;i++)
    {
        printf("%d ",arr[i]*arr[i]*arr[i]);
    }

    return 0;
}
