#include <stdio.h>
#include <string.h>

char* copy_string(const char *original) {
    if (original == NULL) {
        return NULL;
    }
    int length = strlen(original);
    char *copy = (char*)malloc((length + 1) * sizeof(char));
    if (copy == NULL) {
        printf("Ошибка выделения памяти для копии строки!\n");
        return NULL;
    }
    strcpy(copy, original);
    return copy;
}

int main() {
    char original[] = "Пример строки для копирования";
    char *copied = copy_string(original);

    if (copied != NULL) {
        printf("Оригинальная строка: %s\n", original);
        printf("Копия строки: %s\n", copied);
        free(copied);
    } else {
        printf("Не удалось создать копию строки!\n");
    }

    return 0;
}
