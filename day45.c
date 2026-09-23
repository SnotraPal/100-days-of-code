// Count frequency of a given character in a string.
#include <stdio.h>

int countFrequency(char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);
    int frequency = countFrequency(str, ch);
    printf("Frequency of '%c' in the string is: %d\n", ch, frequency);
    return 0;
}
// Toggle case of each character in a string.
#include <stdio.h>
void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}
