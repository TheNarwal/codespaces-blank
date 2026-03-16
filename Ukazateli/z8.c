#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void safe_free_matrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int **matrix, m, n, i, j;
    srand(time(NULL));
    printf("Введите количество строк (M): ");
    scanf("%d", &m);
    printf("Введите количество столбцов (N): ");
    scanf("%d", &n);
    matrix = (int**)malloc(m * sizeof(int*));
    if (matrix == NULL) {
        printf("Ошибка выделения памяти для указателей на строки!\n");
        return 1;
    }
    for (i = 0; i < m; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Ошибка выделения памяти для строки %d\n", i);
            safe_free_matrix(matrix, i);
            return 1;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    safe_free_matrix(matrix, m);
    return 0;
}
