#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n==0){
        printf("Zero");
    }
    else if(n<0){
        printf("Negative number");
    }
    else{
        printf("Positive number");
    }
    return 0;
}