#include <stdio.h>
#include <string.h>

int main() {

    struct Student {
        char name[100];
        float gpa;     
    };

    struct Student group[5];

    strcpy(group[0].name, "Ivan");     
    group[0].gpa = 4.5;                

    strcpy(group[1].name, "Anna");
    group[1].gpa = 4.2;

    strcpy(group[2].name, "Sergey");
    group[2].gpa = 3.8;

    strcpy(group[3].name, "Maria");
    group[3].gpa = 4.0;

    strcpy(group[4].name, "Your Name"); 
    group[4].gpa = 4.3;

    for (int i = 0; i < 5; i++) {
        printf("Student: %s, GPA: %.1f\n", group[i].name, group[i].gpa);
    }

    return 0;
}