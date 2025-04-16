#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks[5];
};

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else if (percentage >= 50) return 'E';
    else return 'F';
}

int main() {
    struct Student s;
    float total = 0, percentage;
    int i;

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }

    percentage = total / 5;  
    char grade = calculateGrade(percentage);

    printf("\n- Student Report -\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
