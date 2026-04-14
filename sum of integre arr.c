#include <stdio.h>

int main()
{
    int arr[10], i, sum = 0;
    float avg;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    avg = sum / 10.0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}
