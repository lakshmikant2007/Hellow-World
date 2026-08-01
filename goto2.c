//goto statement//
#include<stdio.h>
int main()
{
    for(int i=0;i<10;i++)
    {
        if(i==5)
            goto label;
        printf("%d\n",i);
    }
    label:
    printf("We have reached the label\n");
    return 0;
}
