#include <stdio.h>

// Function Declaration
int add();

int main()
{
    int s;

    s = add();   // Function Call

    printf("Sum is %d", s);

    return 0;
}

// Function Definition
int add()
{
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = a + b;

    return c;   // Returning value
}
