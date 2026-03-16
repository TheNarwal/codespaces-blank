#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    str = (char*)malloc(51 * sizeof(char));
    if (str == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    printf("Введите строку: ");
    fgets(str, 50, stdin);
    str[strlen(str)-1] = '\0';
    printf("Введённая строка: %s\n", str);
    free(str);
    return 0;
}
