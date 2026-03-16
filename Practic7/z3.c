#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name; 
    float gpa; 
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student* students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter GPA %d: ", i + 1);
        scanf("%f", &students[i].gpa); 
    }

    printf("\nStudent list:\n");
    printf("-------------\n");

    float sum_gpa = 0.0;
    for (int i = 0; i < n; i++) {
        printf("Name: %s, GPA: %.2f\n", students[i].name, students[i].gpa);
        sum_gpa += students[i].gpa;
    }

    float average_gpa = sum_gpa / n;
    printf("\nAverage GPA: %.2f\n", average_gpa);

    free(students);

    return 0;
}
