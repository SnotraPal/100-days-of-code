// Define a struct with enum Gender and print person's gender.
#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[100];
    enum Gender gender;
};

int main() {
    struct Person person = {"Alice", FEMALE};
    printf("Person: %s\n", person.name);
    switch (person.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
    }
    return 0;
}
