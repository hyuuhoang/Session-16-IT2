#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("phan tu thu %d: %d\n", i, arr[i]);
    }
}

int main() {

    int array[] = {5, 15, 25, 35, 45};
    int size = sizeof(array) / sizeof(array[0]);


    printf("cac phan tu trong mang la :\n");
    printArray(array, size);

    return 0;
}

