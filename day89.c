// Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Color { RED, GREEN, BLUE };
enum Size { SMALL, MEDIUM, LARGE };

int main() {
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);
    printf("SMALL = %d\n", SMALL);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("LARGE = %d\n", LARGE);
    return 0;
}