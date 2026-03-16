#include <stdio.h>
#include <stdlib.h>

int copy_array(int *src, int *dst, int size) {
    if (size <= 0) {
        return 0;
    }
    for (int i = 0; i < size; i++) {
        dst[i] = src[i];
    }
    return 1;
}

int main() {
    const int SIZE = 10;
    int *arr1 = (int*)malloc(SIZE * sizeof(int));
    int *arr2 = (int*)malloc(SIZE * sizeof(int));

    if (arr1 == NULL || arr2 == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    for (int i = 0; i < SIZE; i++) {
        arr1[i] = i + 1;
    }
    if (copy_array(arr1, arr2, SIZE)) {
        printf("Копирование успешно!\n");
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", arr2[i]);
        }
        printf("\n");
    } else {
        printf("Ошибка копирования: размер массива равен нулю!\n");
    }

    free(arr1);
    free(arr2);
    return 0;
}
