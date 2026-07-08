#include<stdio.h>
unsigned int factorial(unsigned int n) 
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int N=25;
    int fact = factorial(N);
    printf("factorial of %d is %d",N,fact);
    return 0;
}