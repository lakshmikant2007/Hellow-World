//Check Whether a Number Is a Palindrome Using a Function
#include <stdio.h>

int reverseNumber(int n)
{
    int reverse = 0;

    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}

int isPalindrome(int n)
{
    return n == reverseNumber(n);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}