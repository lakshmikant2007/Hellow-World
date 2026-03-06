#include <stdio.h>

void printN(int n)
{
    if (n > 0)
    {
        printN(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int n = 85;
    printN(n);
    return 0;
}
