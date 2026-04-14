#include<stdio.h>

int main() {
    int arr[15], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n > 0) {
        n = n - 1;
    } else {
        printf("Array is already empty\n");
    }

    printf("after delete last element:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
