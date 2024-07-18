#include <stdio.h>
#include <stdlib.h>

// Main function of the program
void main(){

    // Defining Variables
    char letter = 'x';

    // Simple Conditional
    if(letter == 'x'){
        printf("\nThe letter is x.");
    }

    // ASCII Code
    printf("\nLetter code = %d", letter);

    // Comparing ASCII Code
    if(letter == 120){
         printf("\nThe letter is x.\n");
    }

    // Pauses the program after execution
    system("pause");

}

