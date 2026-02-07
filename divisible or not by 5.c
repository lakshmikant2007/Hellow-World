#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%5==0)
        printf("divisible by 5");
    else
        printf("NOt divisible by 5");
    getch();
}

