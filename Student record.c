#include <stdio.h>
#include <string.h>
struct Student
{
 char name[30];
int marks;
char grade;
};
char calculateGrade(int marks)
{
 if(marks >= 90) return 'A';
 else if(marks >= 75) return 'B';
 else if(marks >= 50) return 'C';
 else return 'F';
}
// Function to display records
void display(struct Student s[], int n)
{
 int i;
 printf("\n--- Student Records ---\n");
 for(i = 0; i < n; i++)
 {
 printf("Name: %s Marks: %d Grade: %c\n",
 s[i].name, s[i].marks, s[i].grade);
 }
}
// Function to search student by name
void search(struct Student s[], int n)
{
 char key[30];
 int i, found = 0;
 printf("\nEnter name to search: ");
 scanf("%s", key);
for(i = 0; i < n; i++)
 {
 if(strcmp(s[i].name, key) == 0)
 {
 printf("Found -> Name: %s Marks: %d Grade: %c\n",
 s[i].name, s[i].marks, s[i].grade);
 found = 1;
 }
 }
 if(found == 0)
 printf("Student not found\n");
}
int main()
{
 int n, i;
 float total = 0, avg;
 printf("Enter number of students: ");
 scanf("%d", &n);
 struct Student s[n];
 // Input
 for(i = 0; i < n; i++)
 {
 printf("\nEnter name: ");
 scanf("%s", s[i].name);
 printf("Enter marks: ");
 scanf("%d", &s[i].marks);
 s[i].grade = calculateGrade(s[i].marks);
 total += s[i].marks;
 }
 // Average
 avg = total / n;
 display(s, n);
printf("\nAverage Marks = %.2f\n", avg);
 search(s, n);
 return 0;
}
