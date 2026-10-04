#include<stdio.h>
int main()
{
    int i=1,sum=0;
    for(i=1;i<=100;i++)
    {
        sum=sum+i;
    }
    printf("Sum of numbers from 1 to 100 is: %d",sum);
    return 0;
}