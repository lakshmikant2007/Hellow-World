#include<stdio.h>

int main()
{
    int x;
    float side,area,length,breadth,base,height,radius;
    printf("Enter 1 for Square area : ");
    printf("\nEnter 2 for rectangle area : ");
    printf("\nEnter 3 for triangle area : ");
    printf("\nEnter 4 for circle area : ");
    scanf("%d",&x);
    switch(x)
        {
        case 1:
            printf("Enter side of square");
            scanf("%f",&side);
            area = side*side;
            printf("area of square is =%.2f",area);
            break;
        case 2:
            printf("Enter side of rectangle");
            scanf("%f%f",&length,&breadth);
            area = length*breadth;
            printf("area of rectangle is =%.2f",area);
            break;
        case 3:
            printf("Enter side of triangle");
            scanf("%f%f",&base,&height);
            area = 0.5*base*height;
            printf("area of triangle is =%.2f",area);
            break;
        case 4:
            printf("Enter side of circle");
            scanf("%f",&radius);
            area = 3.14*radius*radius;
            printf("area of circle is =%.2f",area);
            break;
        case 5:
            printf("Invalid number entered");
        }
        return 0;
}
