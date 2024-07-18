#include <stdio.h>
#include <stdlib.h>

// Main function of the program
void main(){

    // Defining Variables
    float nota1, nota2, nota3, mediaNotas;
    printf("Write three notes: \n");
    scanf("%f %f %f\N", &nota1, &nota2, &nota3);
    mediaNotas = (nota1 + nota2 + nota3) / 3;
    printf("The average grade is: %f \n", mediaNotas);

    if (mediaNotas > 7) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    // Pauses the program after execution
    system("pause");

}
