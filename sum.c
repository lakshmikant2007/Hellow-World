#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(b > 0)
    {
        for(int i = 0; i < b; i++)
            a++;
    }
    else
    {
        for(int i = 0; i > b; i--)
            a--;
    }

    printf("sum = %d\n", a);

    return 0;
}