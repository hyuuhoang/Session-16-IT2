#include <stdio.h>

int main() {
    int x = 10;

    int *ptr = &x;

    printf("Cách 1:\n");
    printf("Gia tri cua x: %d\n", x);
    printf("Ðia chi cua x: %p\n", (void*)&x);

    printf("Cach 2:\n");
    printf("gia tri thong qua con tro : %d\n", *ptr);
    printf("dia chi cua x thong qua con tro : %p\n", (void*)ptr);

    return 0;
}
