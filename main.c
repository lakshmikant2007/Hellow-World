#include<stdio.h>
int main()
{
    float length, breadth, area;
    printf("Enter a number");
    scanf("%f %f",&length,&breadth);
    area=length*breadth;
    printf("area=%.2f",area);
    return 0;
}
