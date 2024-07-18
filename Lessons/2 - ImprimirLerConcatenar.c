#include <stdio.h>
#include <stdlib.h>

void main(){

    // Defining a variable
    int a = 5, b;

    // Printing the variable "a"
    printf("%d", a);

    // Concatenating
    printf("\nThe value of variable a is: %d", a);

    // Changing the value of "a"
    a = 15;

    // Concatenating
    printf("\nThe value of var a is: %d\n", a);

    // Printing
    printf("Qual deve ser o valor de b?\n");

    // Reading values
    scanf("%d", &b);

    // Concatenating
    printf("\nThe value of var b is: %d", b);

    // Skip lines
    printf("\n");

    // Printing
    printf("Teste");

    // Pausing
    system("pause");

}
