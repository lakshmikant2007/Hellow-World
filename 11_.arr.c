#include<stdio.h>

int main()
{
    int arr[2], mul=1, i;

    printf("Enter two numbers:\n");

    for(i=0;i<2;i++)
    {
        scanf("%d",&arr[i]);
        mul = mul * arr[i];
    }

    printf("Multiplication = %d",mul);

    return 0;
}
