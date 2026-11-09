// Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    enum Color c;
    for (c = RED; c <= BLUE; c++) {
        printf("Color: %d\n", c);
    }
    return 0;
}
