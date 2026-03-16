#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid_child, pid_grandchild;

    pid_child = fork();

    if (pid_child < 0) {
        fprintf(stderr, "Ошибка при создании дочернего процесса\n");
        return 1;
    } else if (pid_child == 0) {
        printf("Дочерний процесс: PID = %d, уровень — потомок\n", getpid());

        pid_grandchild = fork();

        if (pid_grandchild < 0) {
            fprintf(stderr, "Ошибка при создании внукового процесса\n");
            return 1;
        } else if (pid_grandchild == 0) {
            printf("Внуковый процесс: PID = %d, уровень — внук\n", getpid());
        } else {
            printf("Дочерний процесс (родитель для внука): PID = %d\n", getpid());
        }
    } else {
        printf("Родительский процесс: PID = %d, уровень — родитель\n", getpid());
    }

    return 0;
}
