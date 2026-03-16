#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i;
    arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    for (i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }
    arr = (int*)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка перераспределения памяти!\n");
        return 1;
    }
    for (i = 5; i < 10; i++) {
        arr[i] = i * 3;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
