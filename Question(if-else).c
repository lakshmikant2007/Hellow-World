#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x %5 == 0)
        printf("positive");
    else
        printf("non positive");
    getch();
}
