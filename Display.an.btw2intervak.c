#include<stdio.h>
int main()
{
    int start, end, i, num ,rem, sum;
    printf("Enter the starting and ending number: ");
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++)
    {
        num=i;
        sum=0;
        while(num!=0)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(sum==i)
        {
           printf("%d ",i);
        }
    }
    return 0;
}