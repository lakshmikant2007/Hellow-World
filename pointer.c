#include<stdio.h>
int main()
{
    int a = 600;
    int *ptr;

    ptr = &a;

    printf("%p\n", ptr);

    printf("%d\n", *ptr);

return 0;    
}