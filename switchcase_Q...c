/*Write a C program using nested switch:
First switch → select category:
1 → Fruits
2 → Vegetables
Second switch → select item:
Fruits → Apple, Mango
Vegetables → Potato, Tomato*/
#include<stdio.h>
int main()
{
    int category,item;
    printf("Enter your category\n");
    printf("1: Fruits\n");
    printf("2: Vegetable\n");
    scanf("%d",&category);
    switch(category)
    {
    case 1:
        printf("let's choose which one is your FAV:");
        printf("\nFruits:\n");
        printf("1: Grapes\n");
        printf("2: Banana\n");
        printf("3: Apple\n");
        printf("4: Mango\n");
        scanf("%d",&item);

        switch(item)
        {
        case 1:
            printf("I selected  Grapes\n");
            break;
        case 2:
            printf("I selected Banana\n");
            break;
        case 3:
            printf("I selected Apple\n");
            break;
        case 4:
            printf("I selected Mango\n");
            break;
        default:
            printf("INVALID CHOICE ENTERED :!");
        }
        break;

    case 2:
        printf("\nVegetable\n");
        printf("1: Potato\n");
        printf("2: Tomato\n");
        printf("3: Carrot\n");
        printf("4: Cabbage\n");
        scanf("%d",&item);
        switch(item)
        {
        case 1:
            printf("I selected Potato\n");
            break;
        case 2:
            printf("I selected Tomato\n");
            break;
        case 3:
            printf("I selected Carrot\n");
            break;
        case 4:
            printf("I selected Cabbage\n");
            break;
        default:
            printf("INVALID CHOICE ENTERED :!");
        }
        break;

    default:
            printf("INVALID CHOICE ENTERED :!");
            break;
    }

    return 0;
}
