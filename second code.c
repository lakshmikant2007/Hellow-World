#include <stdio.h>

int main() {
    int x;
    float a, b, add, sub, mul, div;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your selected number: ");
    scanf("%d", &x);

    switch(x)
    {
    case 1:
        printf("Enter a number:");
        scanf("%f%f",&a,&b);
        add = a + b;
        printf("added value is =%.2f",add);
        break;

    case 2:
        printf("Enter a number:");
        scanf("%f%f",&a,&b);
        sub = a - b;
        printf("Subtracted value is =%.2f",sub);
        break;

    case 3:
        printf("Enter a number:");
        scanf("%f%f",&a,&b);
        mul = a * b;
        printf("Multiplied value is =%.2f",mul);
        break;

    case 4:
        printf("Enter a number: ");
        scanf("%f%f", &a, &b);

        if(b != 0)
        {
            printf("Division value is = %.2f", a / b);
        }
        else
        {
            printf("Error: Division by zero is not allowed");
        }
        break;

    default:
        printf("Invalid Number entered");
    }

    return 0;
}
