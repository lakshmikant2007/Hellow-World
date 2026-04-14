#include <stdio.h>

int main() {
    int arr1[7], arr2[7];
    int i, j, found;

    printf("Enter 7 elements for first array:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 7 elements for second array:\n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Common elements are:\n");

    for(i = 0; i < 7; i++) {
        found = 0;
        for(j = 0; j < 7; j++) {
            if(arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if(found == 1) {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}
