#include <stdio.h>
#include <stdlib.h>

// Structure to store student details
typedef struct {
    char name[50];
    int marks;
} Student;

int main() {
    int n, i;
    Student *students; // Pointer

    // Input for number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    students = (Student *)malloc(n * sizeof(Student));

    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input
    for (i = 0; i < n; i++) {
        printf("Enter Student %d Name: ", i + 1);
        scanf(" %[^\n]", students[i].name); // Read full name including spaces
        printf("Enter Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Displaying
    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++) {
        printf("%s - %d\n", students[i].name, students[i].marks);
    }

    // Freeung 
    free(students);

    return 0;
}
