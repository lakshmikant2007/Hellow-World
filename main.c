#include <stdio.h>
#include <conio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x %5 == 0)
        printf("Divisible by 5");
    else
        printf("not divisible by 5");
    getch();
}
