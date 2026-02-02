#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("positive");
    }
    if(x<=0)
    {
        printf("non positive");
    }
    getch();
}
