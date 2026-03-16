#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2;
    int i;
    arr1 = (int*)malloc(10 * sizeof(int));
    arr2 = (int*)malloc(10 * sizeof(int));
    if (arr1 == NULL || arr2 == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    for (i = 0; i < 10; i++) {
        arr1[i] = i * 2;
    }
    for (i = 0; i < 10; i++) {
        arr2[i] = arr1[i];
    }
    printf("Первый массив: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nВторой массив: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    free(arr1);
    free(arr2);
    return 0;
}
