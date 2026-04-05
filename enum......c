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
    //printf("1: AIRPLANE\n");
    //printf("2: TRAIN\n");
    //printf("3: TRUCK\n");
    //printf("4: BUS\n");
    //printf("5: CAR\n");
    //printf("6: BIKE\n");
    //scanf("%d", &x);

    switch(x)
    {
        case AIRPLANE:
            printf("Travel in air");
            break;
        case TRAIN:
            printf("Run on track");
            break;
        case TRUCK:
            printf("Travel on road with 12 wheels");
            break;
        case BUS:
            printf("Travel on road with 10 wheels");
            break;
        case CAR:
            printf("Travel on road with 4 wheels");
            break;
        case BIKE:
            printf("Travel on road with 2 wheels");
            break;
        default:
            printf("Invalid number!");
            break;
    }

    return 0;
}
