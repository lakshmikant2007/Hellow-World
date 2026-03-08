//calculate average of three numbers.

#include<stdio.h>

int main()
{
    int arr[3], i, sum = 0;
    float average;

    printf("Enter three numbers:\n");

    for(i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = sum / 3.0;

    printf("Average = %.2f", average);

    return 0;
}

