#include<stdio.h>
int main()
{
    int arr[7], i, j;
    printf("Enter 7 numbers:\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements:\n");

    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ",arr[i]);
                break;
            }
        }
    }
    return 0;
}
