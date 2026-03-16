#include <stdio.h>
#include <stdlib.h>

int main() {
    float *arr;
    int i;
    arr = (float*)calloc(5, sizeof(float));
    if (arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    for (i = 0; i < 5; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
