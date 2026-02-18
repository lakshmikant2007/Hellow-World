#include<stdio.h>

// Function Declaration
void add();

int main()
{
    add();      // Function Call
    return 0;
}

// Function Definition
void add()
{
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = a + b;

    printf("Sum is %d", c);
}
