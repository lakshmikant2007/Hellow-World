#include<stdio.h>

enum Vehicle
{
    AIRPLANE = 1,
    TRAIN,
    TRUCK,
    BUS,
    CAR,
    BIKE
};
int main()
{
    int x;
    printf("Enter your choice:\n");
    printf("1: AIRPLANE\n");
    printf("2: TRAIN\n");
    printf("3: TRUCK\n");
    printf("4: BUS\n");
    printf("5: CAR\n");
    printf("6: BIKE\n");

    scanf("%d", &x);

    if(x == AIRPLANE)
    {
        printf("Travel in air");
    }
    else if(x == TRAIN)
    {
        printf("Run on track");
    }
    else if(x == TRUCK)
    {
        printf("Travel on road with 12 wheels");
    }
    else if(x == BUS)
    {
        printf("Travel on road with 10 wheels");
    }
    else if(x == CAR)
    {
        printf("Travel on road with 4 wheels");
    }
    else if(x == BIKE)
    {
        printf("Travel on road with 2 wheels");
    }
    else
    {
        printf("Invalid number!");
    }

    return 0;
}
