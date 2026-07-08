#include<stdio.h>
int recSum(int n)
{
    if(n<=1)
    return 0;
    return n+recSum(n-1);
}
int main()
{
    int n=10;
    printf("sum=%d",recSum(n));
    return 0;
}