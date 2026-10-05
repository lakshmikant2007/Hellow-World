//Check Whether a Number Is Armstrong Using a Function
#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;

    while (exp > 0)
    {
        result *= base;
        exp--;
    }

    return result;
}

int countDigits(int n)
{
    int count = 0;

    while (n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int isArmstrong(int n)
{
    int original = n;
    int sum = 0;
    int digits = countDigits(n);

    while (n != 0)
    {
        int digit = n % 10;
        sum += power(digit, digits);
        n /= 10;
    }

    return sum == original;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}