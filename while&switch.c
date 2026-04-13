#include<stdio.h>
int main()
{
  while(1)
  {

    int a;
    float side,area,length,breadth,base,height,radius;
    printf("choose your choice:\n");
    printf("1. Find area of square:\n");
    printf("2. Find area of rectangle:\n");
    printf("3. Find area of circle:\n");
    printf("4. Find area of triangle:\n");
    printf("5. Program Exit\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            printf("Enter side of square:\n");
            scanf("%f",&side);
            area=side*side;
            printf("area of square is =%.2f",area);
            break;
        case 2:
             printf("Enter length and breadth rectangle:\n");
            scanf("%f%f",&length,&breadth);
            area=length*breadth;
            printf("area of rectangle is =%.2f",area);
            break;
        case 3:
            printf("Enter radius of circle:\n");
            scanf("%f",&radius);
            area=3.14*radius*radius;
            printf("area of circle is =%.2f",area);
            break;
        case 4:
            printf("Enter base and height triangle:\n");
            scanf("%f%f",&base,&height);
            area=0.5*base*height;
            printf("area of triangle is =%.2f",area);
            break;
        case 5:
            printf("Program exit !");
            return 0;
        default:
            printf("Invalid choice!\n try again\n");
    }
  }
}
