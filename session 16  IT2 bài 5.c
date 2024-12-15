#include <stdio.h>

void updateArray(int arr[], int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        arr[position] = newValue;
    } else {
        printf("vi tri %d khong hop le khong the cap nhat.\n", position);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("phan tu thu %d: %d\n", i, arr[i]);
    }
}

int main() {

    int array[] = {5, 15, 25, 35, 45};
    int size = sizeof(array) / sizeof(array[0]);

    printf("mang ban dau:\n");
    printArray(array, size);

    int newValue = 99;
    int position = 2;
    updateArray(array, size, newValue, position);

    printf("\n Mang sau khi cap nhat:\n");
    printArray(array, size);

    return 0;
}

