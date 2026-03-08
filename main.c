//sum of 5 numbers.
#include<stdio.h>
int main()
{
    int arr[5],i,sum;
    printf("Enter 5 numbers:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;
}
