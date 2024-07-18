#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Library for writing things with accents.

void main () {
    // Code to use the system's default language.
    setlocale(LC_ALL,"");

    // Prints "Hello, world" on the screen.
    printf("Hello, world!\n");

    int a = 50;
    printf("The value of a is: %d \n", a);
    scanf("%d", &a);
    printf("The value of a has changed to: %d \n", a);

    float b = 5.5;
    printf("The value of b is: %f \n", b);
    scanf("%f", &b);
    printf("The value of b has changed to: %f \n", b);

    char c = 't';
    printf("The value of c is: %c \n", c);
    fflush(stdin);
    scanf("%c", &c);
    printf("The value of c has changed to: %c \n", c);
}
