#include <stdio.h>
#include <stdlib.h>

// Main function of the program
void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number & 1) {
        printf("The number %d is odd.\n", number);
    } else {
        printf("The number %d is even.\n", number);
    }

    // Compound Conditional
    if(number == 1){
        printf("\nThe number = 1");
    }else if(number == 2){
         printf("\nThe number = 2");
    }else{
        printf("\nThe option is not equal to 1 or 2");
    }
}

