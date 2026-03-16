#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    const char *filename = "myfile.txt";
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Ошибка при открытии файла");
        return 1;
    }
    const char *text = "Hello, system programming!\n";
    write(fd, text, 27);
    close(fd);
    printf("Файл успешно создан и записан\n");
    return 0;
}
