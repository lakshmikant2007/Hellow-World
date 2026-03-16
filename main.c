#include<stdio.h>

int main()
{
    int arr[3], i;

    printf("Enter Three numbers:\n");

    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Square of numbers:\n");

    for(i=0;i<3;i++)
    {
        printf("%d ",arr[i]*arr[i]);
    }

    return 0;
}
