// Store details of 5 students in an array of structures and print all.
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
printf("\nStudent Details:\n");
for (int i = 0; i < 5; i++) {
    printf("Student %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Roll Number: %d\n", students[i].roll_no);
    printf("Marks: %.2f\n", students[i].marks);
}
    return 0;
}