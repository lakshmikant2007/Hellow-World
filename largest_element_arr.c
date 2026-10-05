//Find the Largest Element in an Array Using a Function
#include <stdio.h>

int findLargest(int arr[], int n)
{
    int largest = arr[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Largest element = %d\n", findLargest(arr, n));

    return 0;
}