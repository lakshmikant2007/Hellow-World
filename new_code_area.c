#include<stdio.h>
int main()
{
    int x;
    printf("Enter number\n");
    printf("1: Airplane\n");
    printf("2: Train\n");
    printf("3: Truck\n");
    printf("4: Bus\n");
    printf("5: Car\n");
    printf("6: Bike\n");
    printf("7: Human\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Travel in air");
        break;
    case 2:
        printf("Run on track");
        break;
    case 3:
        printf("Travel on road with 12 wheels");
        break;
    case 4:
        printf("Travel on road with 10 wheels");
        break;
    case 5:
        printf("Travel on road with 4 wheels");
        break;
    case 6:
        printf("Travel on road with 2 wheels");
        break;
    case 7:
        printf("Travel by foot");
        break;
    default:
        printf("Invalid number!");
    }
    return 0;
}
