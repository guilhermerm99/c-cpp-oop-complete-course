#include <stdio.h>
#include <stdlib.h>

// Main function of the program
void main(){
    float a, b, result;
    printf("First note: \n");
    scanf("%f", &a);
    printf("Second note: \n");
    scanf("%f", &b);
    result = (a + b)/2;
    printf("The average score is: %f\n", result);

    // Pause the program after running
    system("pause");

}
