#include<stdio.h>

int main()
{
    float c[3], f[3];
    int i;

    printf("Enter 3 temperatures in Celsius:\n");

    for(i=0;i<3;i++)
    {
        scanf("%f",&c[i]);
        f[i] = (c[i] * 9/5) + 32;
    }

    printf("Temperatures in Fahrenheit:\n");

    for(i=0;i<3;i++)
    {
        printf("%.2f ",f[i]);
    }

    return 0;
}
