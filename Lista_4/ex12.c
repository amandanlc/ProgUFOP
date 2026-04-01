#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    float grade1;
    float grade2;
    float average;
} Student;

float calculateAverage(float g1, float g2) {
    return (g1 * 3 + g2 * 7) / 10;
}

int findStudent(Student classroom[], int total, char searchName[]) {
    for (int i = 0; i < total; i++) {
        if (strcmp(classroom[i].name, searchName) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    Student classroom[MAX_STUDENTS];
    int totalStudents = 0;
    int option = 0;

    while (option != 5) {
        printf("\n--- MENU ---\n");
        printf("1. Insert student\n");
        printf("2. Consult student grades\n");
        printf("3. Update student grades\n");
        printf("4. Consult class average\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        
        scanf("%d", &option);
        getchar(); // Clear the newline buffer (\n) left by scanf

        if (option == 1) { // INSERT
            if (totalStudents >= MAX_STUDENTS) {
                printf("Error: Classroom is full!\n");
            } else {
                char newName[50];
                printf("Enter student name: ");
                fgets(newName, 50, stdin);
                newName[strcspn(newName, "\n")] = 0; // Remove the trailing \n

                if (findStudent(classroom, totalStudents, newName) != -1) {
                    printf("Status: Student already registered. Insertion cancelled.\n");
                } else {
                    strcpy(classroom[totalStudents].name, newName);
                    printf("Enter Grade 1: ");
                    scanf("%f", &classroom[totalStudents].grade1);
                    printf("Enter Grade 2: ");
                    scanf("%f", &classroom[totalStudents].grade2);
                    
                    classroom[totalStudents].average = calculateAverage(classroom[totalStudents].grade1, classroom[totalStudents].grade2);
                    totalStudents++;
                    printf("Success: Student inserted!\n");
                }
            }
        } 
        else if (option == 2) { // CONSULT GRADES
            char search[50];
            printf("Enter student name to consult: ");
            fgets(search, 50, stdin);
            search[strcspn(search, "\n")] = 0;

            int idx = findStudent(classroom, totalStudents, search);
            if (idx != -1) {
                printf("\nStudent: %s\n", classroom[idx].name);
                printf("Grade 1: %.2f | Grade 2: %.2f\n", classroom[idx].grade1, classroom[idx].grade2);
                printf("Weighted Average: %.2f\n", classroom[idx].average);
            } else {
                printf("Status: Student not found.\n");
            }
        }
        else if (option == 3) { // UPDATE GRADES
            char search[50];
            printf("Enter student name to update: ");
            fgets(search, 50, stdin);
            search[strcspn(search, "\n")] = 0;

            int idx = findStudent(classroom, totalStudents, search);
            if (idx != -1) {
                printf("Updating grades for %s:\n", classroom[idx].name);
                printf("Enter New Grade 1: ");
                scanf("%f", &classroom[idx].grade1);
                printf("Enter New Grade 2: ");
                scanf("%f", &classroom[idx].grade2);
                
                classroom[idx].average = calculateAverage(classroom[idx].grade1, classroom[idx].grade2);
                printf("Success: Grades updated!\n");
            } else {
                printf("Status: Student not found. No changes made.\n");
            }
        }
        else if (option == 4) { // CLASS AVERAGE
            if (totalStudents == 0) {
                printf("Status: No students registered yet.\n");
            } else {
                float sumAverages = 0;
                for (int i = 0; i < totalStudents; i++) {
                    sumAverages += classroom[i].average;
                }
                printf("Overall Class Average (%d students): %.2f\n", totalStudents, sumAverages / totalStudents);
            }
        }
    }

    printf("Exiting the application...\n");
    return 0;
}