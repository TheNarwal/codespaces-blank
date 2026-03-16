#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;
    arr = (int*)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    for (i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
