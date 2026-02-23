#include <stdio.h>

int main() {
    int n, i;
    
    // Ask number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Arrays to store data
    char name[n][30];
    int marks[n];

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", name[i]);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display student details
    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
        printf("Name: %s  Marks: %d\n", name[i], marks[i]);
    }

    return 0;
}
