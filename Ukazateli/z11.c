#include <stddef.h>
#include <stdio.h>
#include <string.h>

int* create_array(int size) {
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

int main() {
    int size = 10;
    int *my_array = create_array(size);

    if (my_array == NULL) {
        return 1;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    free(my_array);
    return 0;
}