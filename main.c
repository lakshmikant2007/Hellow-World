#include<stdio.h>

int main()
{
    int arr[5], i, num, found=0;

    printf("Enter 5 numbers:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d",&num);

    for(i=0;i<5;i++)
    {
        if(arr[i] == num)
        {
            printf("Element found at position %d",i+1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
