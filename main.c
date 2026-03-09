#include<stdio.h>

int main()
{
    int arr[6], i, even=0, odd=0;

    printf("Enter 6 numbers:\n");

    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i] % 2 == 0)
        even++;
        else
        odd++;
    }

    printf("Even = %d\n",even);
    printf("Odd = %d",odd);

    return 0;
}
