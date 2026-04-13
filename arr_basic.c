#include<stdio.h>
int main()
{
    int i=0,arr[5] = {2,4,8,9,3};
    int max = arr[0];

    for(;i<=4;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
