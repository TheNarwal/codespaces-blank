#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* checkEvenOdd(void* arg) {
    int num = 1;
    while (1) {
        if (num % 2 == 0) {
            printf("Число %d — чётное\n", num);
        } else {
            printf("Число %d — нечётное\n", num);
        }
        num++;
        usleep(500000);
    }
    return NULL;
}

void* divideNumbers(void* arg) {
    int a = 10, b = 3;
    while (1) {
        if (b == 0) {
            printf("Ошибка: деление на ноль!\n");
            b = 1;
        } else {
            printf("Результат деления %d / %d = %f\n", a, b, (float)a / b);
        }
        a++;
        b--;
        usleep(500000);
    }
    return NULL;
}

void* addNumbers(void* arg) {
    int x = 5, y = 7;
    while (1) {
        printf("Сумма %d + %d = %d\n", x, y, x + y);
        x++;
        y++;
        usleep(500000);
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2, thread3;

    pthread_create(&thread1, NULL, checkEvenOdd, NULL);
    pthread_create(&thread2, NULL, divideNumbers, NULL);
    pthread_create(&thread3, NULL, addNumbers, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);

    return 0;
}
