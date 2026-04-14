#include <stdio.h>

int main()
{
    int a[5], min, max;

    for(int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    min = a[0];
    max = a[0];

    for(int i = 1; i < 5; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }

    printf("Min = %d\n", min);
    printf("Max = %d", max);

    return 0;
}
