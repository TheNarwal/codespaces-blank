#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Инициализация генератора случайных чисел

    char randomChar = 'A' + rand() % 26; // Случайная буква от A до Z
    int randomInt = rand() % 100;       // Случайное число от 0 до 99
    float randomFloat = (float)rand() / RAND_MAX * 100; // Случайное число от 0 до 100
    double randomDouble = (double)rand() / RAND_MAX * 100; // Случайное число от 0 до 100

    printf("Значения: символ: %c, число: %d, число с плавающей точкой: %f, число с двойной точностью: %lf\n",
           randomChar, randomInt, randomFloat, randomDouble);
    return 0;
}
