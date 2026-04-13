#include<stdio.h>
int main()
{
    int i=0,arr[5] = {2,4,8,9,3};
    int min = arr[0];

    for(;i<=4;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}
