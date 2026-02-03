#include<stdio.h>
#include<conio.h>
int main()
{
    int a=20,b=30;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d,%d",a,b);
    getch();
}
