#include<stdio.h>
int main()
{
    lable:
    printf("We are inside the lable\n");
    goto end;
    printf("Hello world\n");
    goto lable;
    end:
    printf("We are outside the lable");
    return 0;
}