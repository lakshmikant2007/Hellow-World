#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,l,r,b,ar,n1,n2,n3;
    float a;
    while(1)
    {
    printf("\n. Area of circle");
    printf("\n. Area of rectangle");
    printf("\n. Average of three number");
    printf("\n. Exit");
    scanf("%d",&x);

    switch(x)
    {
     case 1:
         printf("Enter radius of a circle");
         scanf("%d",&r);
         a=3.14*r*r;
         printf("Area is %f",a);
         break;
     case 2:
         printf("Enter length and breadth of a rectangle");
         scanf("%d%d",&l,&b);
         ar=l*b;
         printf("Area of rectangle is %d",ar);
         break;
     case 3:
         printf("Enter three number");
         scanf("%d%d%d",&n1,&n2,&n3);
         a=(n1+n2+n3)/3.0;
         printf("Average is %f",a);
         break;
     case 4:
         exit(0);
     default :
         printf("\n Invalid choise");
     }
    }
    return 0;
}
