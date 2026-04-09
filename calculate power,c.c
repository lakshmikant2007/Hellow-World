#include<stdio.h>
int main()
{
    int base,power;
    long long result=1;

    printf("Enter base and power:");
    scanf("%d%d",&base,&power);  //base=2,power=5;

    for(int i=1;i<=power;i++)
    {
        result=result*base;
    }
    printf("Result=%lld",result);

    return 0;
}
