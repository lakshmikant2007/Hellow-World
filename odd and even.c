#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%2)
        printf("odd number");
    else
        printf("even number");
    getch();
}

