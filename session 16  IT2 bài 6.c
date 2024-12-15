#include <stdio.h>

int searchElement(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {

    int array[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);

    int value = 7;
    int result = searchElement(array, size, value);

    if (result != -1) {
        printf("phan tu %d duoc tim thay o vi tri %d\n", value, result);
    } else {
        printf("khong tim thay phan tu %d trong mang.\n", value);
    }

    return 0;
}

