#include<stdio.h>
int main()
{
    int num,sum=0,temp,remainder;
    printf("Enter 3 digit number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum+(remainder*remainder*remainder);
        temp=temp/10;
    }
    if(sum==num)
        printf("%d is an Armstrong number",num);
    else
        printf("%d is not an Armstrong number",num);
    return 0;
}