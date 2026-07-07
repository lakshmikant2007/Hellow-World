#include<stdio.h>

int checkPrime(int n); 

int main()
{
    int start,end,i;

    printf("Enter the starting and ending number: ");
    scanf("%d %d",&start,&end);

    printf("Prime numbers between %d and %d are: ",start,end);

    for(i=start;i<=end;i++)
    {
        if(checkPrime(i))
        {
            printf("%d ",i);
        }
    }

    return 0;
}

int checkPrime(int n)
{
    int j;

    if(n<=1)
    {
        return 0;
    }

    for(j=2;j<n;j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }

    return 1;
}