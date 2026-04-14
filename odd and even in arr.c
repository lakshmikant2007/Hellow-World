#include <stdio.h>

int main()
{
    int arr[10], i;

    printf("Enter 10 element:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers:\n");
    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers:\n");
    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
