#include <stdio.h>
#include <stdlib.h>

// Main function of the program
void main(){
    int a, b, c, result;
    printf("Write three notes: \n");
    scanf("%d %d %d", &a, &b, &c);
    result = a * b * c;
    printf("The multiplication of the three numbers is: %d\n", result);

    // Pause the program after running
    system("pause");

}
