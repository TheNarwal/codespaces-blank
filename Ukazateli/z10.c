#include <stdio.h>

int str_length(const char *str) {
    if (str == NULL) {
        return -1;
    }
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char *str1 = "Hello, World!";
    char *str2 = "";
    char *str3 = NULL;

    printf("Длина строки 'Hello, World!': %d\n", str_length(str1));
    printf("Длина пустой строки: %d\n", str_length(str2));
    printf("Результат для NULL-указателя: %d\n", str_length(str3));

    return 0;
}