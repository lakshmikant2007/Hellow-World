#include <stdio.h>

int main()
{
    float length, width, area, perimeter;

    printf("Enter Length of Rectangle: ");
    scanf("%f", &length);

    printf("Enter Width of Rectangle: ");
    scanf("%f", &width);

    area = length * width;

    perimeter = 2 * (length + width);

    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f", perimeter);

    return 0;
}