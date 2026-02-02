#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    x>0 ? printf("positive") : printf("non positive");
    getch();
}
