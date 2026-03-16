#include <stdio.h>

struct Student {
    char name;
    float gpa;
};

void print_student(struct Student s) {
    printf("%s %f\n", s.name, s.gpa);
}

float average_gpa(struct Student arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i].gpa;
    }
    float avg = sum / n;
    return avg;
}

int main() {
    struct Student group[5] = {
        {"Ivan", 4.5},
        {"Anna", 4.2},
        {"Sergey", 3.8},
        {"Maria", 4.0},
        {"Your Name", 4.3}
    };


    for (int i = 0; i < 5; i++) {
        print_student(group[i]);
    }

    // Считаем средний балл группы
    float avg = average_gpa(group, 5);

    // Выводим средний балл
    printf("Average GPA: %.2f\n", avg);

    return 0;
}