#include <stdio.h>

// Function Declaration
void add(int, int);

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    add(x, y);

    return 0;
}

// Function Definition
void add(int a, int b)
{
    int c;
    c = a + b;

    printf("Sum is %d", c);
}
