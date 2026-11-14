// Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    printf("Enter details for 5 students:\n");
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
    // Find the student with the highest marks
    int max_index = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }
    // Print the details of the student with the highest marks
    printf("\nThe student with the highest marks is:\n");
    printf("Name: %s\n", students[max_index].name);
    printf("Roll Number: %d\n", students[max_index].roll_no);
    printf("Marks: %.2f\n", students[max_index].marks);
    return 0;
}