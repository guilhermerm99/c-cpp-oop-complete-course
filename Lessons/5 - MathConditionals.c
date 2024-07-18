#include <stdio.h>
#include <stdlib.h>

// Main function of the program
void main() {

    // Defining variables
    int a = 5, b = 10, c = 15;
    char d = 'x';

    // Greater than
    if (a > 2) {
        printf("\n %d is greater than 2", a);
    }

    // Greater than or equal
    if (c >= b) {
        printf("\n %d is greater than or equal to %d", c, b);
    }

    // Less than
    if (a < 10) {
        printf("\n %d is less than 10", a);
    }

    // Less than or equal
    if (a <= 10) {
        printf("\n %d is less than or equal to 10", a);
    }

    // Not equal
    if (c != 10) {
        printf("\n %d is not 10", c);
    }
    if (d != 'a') {
        printf("\n %c is not 'a'", d);
    }

    // Pause the program after execution
    system("pause");
}
