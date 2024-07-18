#include <stdio.h>
#include <stdlib.h>

// Main function of the program
void main(){
    int a, b, absResult;
    printf("First note: \n");
    scanf("%d", &a);
    printf("Second note: \n");
    scanf("%d", &b);
    absResult = abs(b - a);
    printf("The absolute value of the difference between grade 1 and grade 2 is: %d\n", absResult);

    // Pause the program after running
    system("pause");

}
